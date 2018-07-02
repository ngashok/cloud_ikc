/*export LD_LIBRARY_PATH=/usr/local/lib/
  gcc ipc_test.c -lenet */

#include "Process.h"

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

int main(int argc, char **argv)
{
    pid_t pid;

    pid = fork();
    if (pid == 0)  {
	Process p2;
	p2.hostInit(ENET_HOST_ANY,0);
	//p2.hostInit(inet_addr("192.168.1.5"),3000);
	//p2.ClientPeerConnect(inet_addr("192.168.1.5"), 1235);
	p2.ClientPeerConnect(ENET_HOST_ANY, 1235);
	std::thread th2(&Process::pollForEvents, &p2);

    	log_packet payload2 ;
     	fill_log_packet(payload2);
	google::protobuf::Any  details2;
	details2.PackFrom(payload2);
	p2.SendMessage("testing",details2);

     //   for (int i = 0; i < 1000; i++) {
      //      p2.SendMessage("testing",details2);
       // }
	th2.join();
    }

    else {
#if 0
        Process p1;
        p1.hostInit(ENET_HOST_ANY,5000);
        p1.ClientPeerConnect(ENET_HOST_ANY, 1234);
        std::thread th1(&Process::pollForEvents, &p1);

        dpdk d1;
        fill_dpdk(d1);
        google::protobuf::Any  details1;
        //details.PackFrom(payload);
        details1.PackFrom(d1);
        p1.SendMessage("testing",details1);
        th1.join();
#endif
    }

}




