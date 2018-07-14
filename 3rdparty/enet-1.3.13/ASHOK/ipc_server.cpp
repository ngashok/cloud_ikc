/*export LD_LIBRARY_PATH=/usr/local/lib/
  gcc ipc_test.c -lenet */

// server.c
#include <enet/enet.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <netinet/in.h>
#include <resolv.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include "message.pb.h"
#include <iostream>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>

#include "ietf-dpdk@2015-05-06.pb.h"
using namespace std;
using namespace google::protobuf::io;
using namespace ietf_dpdk;

google::protobuf::uint32 readHdr(enet_uint8 *buf)
{
    google::protobuf::uint32 size;
    google::protobuf::io::ArrayInputStream ais(buf,4);
    CodedInputStream coded_input(&ais);
    coded_input.ReadVarint32(&size);//Decode the HDR and get the size
    cout<<"size of payload is "<<size<<endl;
    return size;
}

void readBody(enet_uint8 *buffer, google::protobuf::uint32 size)
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

    log_packet payload;
    dpdk d;

    if (details.Is<log_packet>()) {
        details.UnpackTo(&payload);
	cout<<"Message is "<<payload.DebugString();
    }
    if (details.Is<dpdk>()) {
        details.UnpackTo(&d);
	cout<<"Message is "<<d.DebugString();
    }
}

int main(int argc, char **argv)
{
    ENetAddress address;
    ENetHost *server;
    ENetEvent event;
    int eventStatus;

    // a. Initialize enet
    if (enet_initialize() != 0) {
        fprintf(stderr, "An error occured while initializing ENet.\n");
        return EXIT_FAILURE;
    }

    atexit(enet_deinitialize);

    // b. Create a host using enet_host_create
    address.host = ENET_HOST_ANY;
    address.port = 1234;

    server = enet_host_create(&address, 32, 2, 0, 0);

    if (server == NULL) {
        fprintf(stderr, "An error occured while trying to create an ENet server host\n");
        exit(EXIT_FAILURE);
    }

    // c. Connect and user service
    eventStatus = 1;

    while (1) {
        eventStatus = enet_host_service(server, &event, 50000);

        // If we had some event that interested us
        if (eventStatus > 0) {
            switch(event.type) {
                case ENET_EVENT_TYPE_CONNECT:
                    printf("(Server) We got a new connection from %x\n",
                            event.peer->address.host);                    
                    break;

                case ENET_EVENT_TYPE_RECEIVE:
                   // printf("(Server) Size from client : %d\n", readHdr(event.packet->data));
                    readBody(event.packet->data,readHdr(event.packet->data));
                    // Lets broadcast this message to all
                    //enet_host_broadcast(server, 0, event.packet);
                    break;

                case ENET_EVENT_TYPE_DISCONNECT:
                    printf("%s disconnected.\n", event.peer->data);
                    // Reset client's information
                    event.peer->data = NULL;
                    break;

            }
        }
    }

}

