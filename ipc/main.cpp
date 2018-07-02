/*export LD_LIBRARY_PATH=/usr/local/lib/
  gcc ipc_test.c -lenet */

// server.c
#include "Process.h"

int main(int argc, char **argv)
{
    pid_t  pid;
    int i;
    int argv0size = strlen(argv[0]);

    pid = fork();
    if (pid == 0)  {
#if 0
	cout<<"\nChild Process: Server\n";
        strncpy(argv[0],"FastpathProcess",argv0size);
	Process p1;
	p1.hostInit(ENET_HOST_ANY,1234);
	//p1.pollHandlerThread();
	std::thread th1(&Process::pollForEvents, &p1);

	cout<<"\nCHILD:Printing ASHOK from main thread\n";


	/* INIT KNI HERE,test with system for now */

//	system("/home/ngashok/Projects/cloud_ikc/3rdparty/dpdk/dpdk-stable-17.11.2/examples/kni/build/kni -l 0-3 -n 4 -- -P -p 0x3 --config=\"(0,0,1),(1,2,3)\"");
	th1.join();
#endif
    }
    else  {
	cout<<"\nParent Process: Server\n";
        //strncpy(argv[0],"MainProcess",argv0size);
	Process p2;
	p2.hostInit(ENET_HOST_ANY,1235);
	//p2.hostInit(inet_addr("192.168.1.5"),1235); //192.168.56.60

	//p2.pollHandlerThread();

	std::thread th2(&Process::pollForEvents, &p2);

	cout<<"\nPARENT:Printing ASHOK from main thread\n";


	th2.join();
    }
}



