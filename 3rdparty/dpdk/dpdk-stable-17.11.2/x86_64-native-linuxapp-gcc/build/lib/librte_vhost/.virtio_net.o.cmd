cmd_virtio_net.o = gcc -Wp,-MD,./.virtio_net.o.d.tmp  -m64 -pthread  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/x86_64-native-linuxapp-gcc/include -include /home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/x86_64-native-linuxapp-gcc/include/rte_config.h -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -I/home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/lib/librte_vhost -O3 -D_FILE_OFFSET_BITS=64 -I vhost_user    -o virtio_net.o -c /home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/lib/librte_vhost/virtio_net.c 
