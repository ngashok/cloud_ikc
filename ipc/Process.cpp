/*export LD_LIBRARY_PATH=/usr/local/lib/
  gcc ipc_test.c -lenet */

// server.c
#include"Process.h"

uint32 Process:: readHdr(enet_uint8 *buf)
{
    google::protobuf::uint32 size;
    google::protobuf::io::ArrayInputStream ais(buf,4);
    CodedInputStream coded_input(&ais);
    coded_input.ReadVarint32(&size);//Decode the HDR and get the size
    cout<<"\nsize of payload is "<<size<<endl;
    return size;
}

void Process::processInputBuffer(Any& details)
{
    log_packet payload;
    dpdk d;

    if (details.Is<log_packet>()) {
        details.UnpackTo(&payload);
        cout<<"\nReceived Message is "<<payload.DebugString();
        cout<<"\n";
    }
    if (details.Is<dpdk>()) {
        details.UnpackTo(&d);
        cout<<"\nReceived Message is "<<d.DebugString();
        cout<<"\n";
        /*setup dpdk environment */
        d.huge_pages();
        const dpdk::interface& intf1 = d.interface_(0);
        string i1 = intf1.interface();

        const dpdk::interface& intf2 = d.interface_(1);
        string i2 = intf2.interface();
#if 0
        string command = "/home/ngashok/Projects/cloud_ikc/scripts/dpdk_setup.sh " +
            to_string(d.huge_pages()) +
            " " +
            i1 +
            " " +
            i2 + "\0";
        system(command.c_str());
#endif
        //dpdk_setup.sh 2048 enp0s8 enp0s10
    }
}

void Process:: readBufferFromClient(enet_uint8 *buffer, uint32 size)
{
    google::protobuf::Any  details;
    //ErrorStatus status;
    //Assign ArrayInputStream with enough memory 
    google::protobuf::io::ArrayInputStream ais(buffer,size + 4);
    CodedInputStream coded_input(&ais);
    //Read an unsigned integer with Varint encoding, truncating to 32 bits.
    coded_input.ReadVarint32(&size);
    //After the message's length is read, PushLimit() is used to prevent the CodedInputStream 
    //from reading beyond that length.Limits are used when parsing length-delimited 
    //embedded messages
    google::protobuf::io::CodedInputStream::Limit msgLimit = coded_input.PushLimit(size);
    //De-Serialize
    details.ParseFromCodedStream(&coded_input);
    //Once the embedded message has been parsed, PopLimit() is called to undo the limit
    coded_input.PopLimit(msgLimit);
    //Print the message

    processInputBuffer(details);
}

Process::Process()
{
    // a. Initialize enet
    if (enet_initialize() != 0) {
	fprintf(stderr, "\nAn error occured while initializing ENet.\n");
	return;
    }
}

void Process::hostInit(int host_ip, int port)
{
    // b. Create a host using enet_host_create
    hostInfo.host = host_ip;
    hostInfo.port = port;

    server_client = enet_host_create(&hostInfo, 32, 2, 57600 / 8, 14400 / 8);

    /*NOTE: ASHOK: write one more routine for client only 
      enet_host_create(NULL, 1, 2, 57600/8, 14400/8); */

    if (server_client == NULL) {
        fprintf(stderr, "An error occured while trying to create an ENet server host\n");
        //exit(EXIT_FAILURE);
        return;
    }
}

void Process::ClientPeerConnect(int peerAddress, int peerPort)
{
    //enet_address_set_host(&address, "localhost");
    //address.port = 1234;
    // c. Connect and user service
    ENetAddress peerInfo;

    //peerInfo.host = peerAddress;
    peerInfo.port = peerPort;

    enet_address_set_host(&peerInfo, "localhost");
    peer = enet_host_connect(server_client, &peerInfo, 2, 0);
    if (peer == NULL) {
        fprintf(stderr, "\nNo available peers for initializing an ENet connection\n");
        exit(EXIT_FAILURE);
    }
}

void Process::SendMessage(string PeerClientName,
                     google::protobuf::Any&  details)
{
    int siz = details.ByteSize() + 4;
    char *message = new char [siz];

    google::protobuf::io::ArrayOutputStream aos(message,siz);
    CodedOutputStream *coded_output = new CodedOutputStream(&aos);
    coded_output->WriteVarint32(siz-4);
    details.SerializeToCodedStream(coded_output);

    cout<<"\nMy Message is "<<details.DebugString()<<endl;

    if (strlen(message) > 0) {
        printf("\nSending Message %d\n",siz);
        ENetPacket *packet = enet_packet_create(message, siz , ENET_PACKET_FLAG_RELIABLE);
        enet_peer_send(peer, 0, packet);

        //BROADCAST 

        //enet_host_broadcast (server_client, 0, packet);
    }
//    enet_host_flush (peer);
}



void Process::pollForEvents()
{
    // c. Connect and user service
    eventStatus = 1;
    while (1) { 
        eventStatus = enet_host_service(server_client, &event, 100);

        // If we had some event that interested us
        if (eventStatus > 0) {
            switch(event.type) {
                case ENET_EVENT_TYPE_CONNECT:
                    printf("\n(Server) We got a new connection from %x\n",
                            event.peer->address.host);
                    break;

                case ENET_EVENT_TYPE_RECEIVE:
                    // printf("(Server) Size from client : %d\n", readHdr(event.packet->data));
                    readBufferFromClient(event.packet->data,
                            readHdr(event.packet->data));
                    // Lets broadcast this message to all
                    //enet_host_broadcast(server, 0, event.packet);
                    break;

                case ENET_EVENT_TYPE_DISCONNECT:
                    printf("\n%s disconnected.\n", event.peer->data);
                    // Reset client's information
                    event.peer->data = NULL;
                    break;

            }
        }
    }
}

Process::~Process()
{
    enet_deinitialize();
}




