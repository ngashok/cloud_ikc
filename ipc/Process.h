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

#include  <sys/types.h>
#include <thread>
using namespace std;
using namespace google::protobuf::io;
using namespace ietf_dpdk;
using namespace google::protobuf;
/* Initiate a process after forking 
 This process would create a server
 Start listening using Enet service
 Gets an IP address from the pool of addresses from pool reserved for processes*/
class Process
{
    private:
        ENetAddress hostInfo;
        ENetHost *server_client;

        ENetPeer *peer;

        ENetEvent event;
        int eventStatus;
        size_t peerCount;
        size_t channelLimit;
        enet_uint32 incomingBandwidth;
        enet_uint32 outgoingBandwidth;

	void readBufferFromClient(enet_uint8 *buffer, uint32 size);
	uint32 readHdr(enet_uint8 *buf);
	void processInputBuffer(Any& details);
    public:
        Process();     
        ~Process();             
        void hostInit(int host_ip, int port);
        void ClientPeerConnect(int peerAddress, int peerPort);
        void SendMessage(string PeerClientName,
                         google::protobuf::Any&  details);

	void pollForEvents();
     //   std::thread* pollHandlerThread();

};




