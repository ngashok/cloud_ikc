/*export LD_LIBRARY_PATH=/usr/local/lib/
  gcc ipc_test.c -lenet */

#include <enet/enet.h>
#include <stdio.h>
#include <string.h>

#include <unistd.h>
#include <iostream>
#include <google/protobuf/message.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
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

/* Add this include file based on generated file */
#include "message.pb.h"
#include "ietf-dpdk@2015-05-06.pb.h"

using namespace google::protobuf::io;
using namespace std;

using namespace ietf_dpdk; 

void fill_log_packet( log_packet &payload)
{
    int payload_sent = 0;
    payload.set_log_time(10);
    payload.set_log_micro_sec(10);
    payload.set_sequence_no(1);
    payload.set_shm_app_id(101);
    payload.set_packet_id("TST");
    payload.set_log_level("DEBUG");
    //payload.set_log_msg("What shall we say");
 //   payload.utable_interface("testing");

    ::log_packet_interface *a = payload.add_if_();
    a->set_interface("enp0s8");
}

int fill_dpdk(dpdk &d)
{
    d.set_huge_pages(1048);
    //d.interface().set_interface("enp0s8");
    dpdk::interface *intf1= d.add_interface_();
    intf1->set_interface("enps03");

    dpdk::interface *intf2= d.add_interface_();
    intf2->set_interface("enps04");

    //d::interface.set_interface("enp0s8");

    cout<<"size after serilizing is "<<d.ByteSize()<<endl;
    int siz = d.ByteSize()+4;
    return siz;
}


#if 0
void serialize()
{
    details.PackFrom(d);
    siz = details.ByteSize() + 4;
    char *message = new char [siz];

    google::protobuf::io::ArrayOutputStream aos(message,siz);
    CodedOutputStream *coded_output = new CodedOutputStream(&aos);
    coded_output->WriteVarint32(siz-4);
    details.SerializeToCodedStream(coded_output);

    return message;
}
#endif


int main(int argc, char **argv)
{
    ENetAddress address;
    ENetHost *client;
    ENetPeer *peer;
    //char message[1024];
    ENetEvent event;
    int eventStatus;

    // a. Initialize enet
    if (enet_initialize() != 0) {
        fprintf(stderr, "An error occured while initializing ENet.\n");
        return EXIT_FAILURE;
    }

    atexit(enet_deinitialize);

    // b. Create a host using enet_host_create
    client = enet_host_create(NULL, 1, 2, 57600/8, 14400/8);

    if (client == NULL) {
        fprintf(stderr, "An error occured while trying to create an ENet server host\n");
        exit(EXIT_FAILURE);
    }

    enet_address_set_host(&address, "localhost");
    address.port = 1234;

    // c. Connect and user service
    peer = enet_host_connect(client, &address, 2, 0);

    if (peer == NULL) {
        fprintf(stderr, "No available peers for initializing an ENet connection");
        exit(EXIT_FAILURE);
    }
    /* START: DDO THIS BLOCK FOR SERIALIZATION */
#if 0
    int payload_sent = 0;

#endif
    int siz = 0;
    int payload_sent = 0;
#if 0
    log_packet payload ;
     fill_log_packet(payload);
#endif

    dpdk d;
    fill_dpdk(d);   

#if 0
    google::protobuf::io::ArrayOutputStream aos(message,siz);
    CodedOutputStream *coded_output = new CodedOutputStream(&aos);
    coded_output->WriteVarint32(siz-4);
    payload.SerializeToCodedStream(coded_output);
#endif

    /* END: DO THIS BLOCK FOR SERIALIZATION */

    //Any any = Any.pack(payload);   
    //ErrorStatus status;
    google::protobuf::Any  details;
    //details.PackFrom(payload);
    details.PackFrom(d);
    siz = details.ByteSize() + 4;
    char *message = new char [siz];

    google::protobuf::io::ArrayOutputStream aos(message,siz);
    CodedOutputStream *coded_output = new CodedOutputStream(&aos);
    coded_output->WriteVarint32(siz-4);
    details.SerializeToCodedStream(coded_output);


    eventStatus = 1;

    while (1) {
        eventStatus = enet_host_service(client, &event, 50000);

        // If we had some event that interested us
        if (eventStatus > 0) {
            switch(event.type) {
                case ENET_EVENT_TYPE_CONNECT:
                    printf("(Client) We got a new connection from %x\n",
                            event.peer->address.host);                    break;

                case ENET_EVENT_TYPE_RECEIVE:
                    printf("(Client) Message from server : %s\n", event.packet->data);
                    // Lets broadcast this message to all
                    // enet_host_broadcast(client, 0, event.packet);
                    enet_packet_destroy(event.packet);
                    break;

                case ENET_EVENT_TYPE_DISCONNECT:
                    printf("(Client) %s disconnected.\n", event.peer->data);
                    // Reset client's information
                    event.peer->data = NULL;
                    break;
            }
        }

        if (strlen(message) > 0 && payload_sent == 0) {
            printf("Sending Message");
            ENetPacket *packet = enet_packet_create(message, siz , ENET_PACKET_FLAG_RELIABLE);
            enet_peer_send(peer, 0, packet);
            payload_sent = 1;
        }
    }
}




