cmd_ark_ethdev_rx.o = gcc -Wp,-MD,./.ark_ethdev_rx.o.d.tmp  -m64 -pthread  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_MACHINE_CPUFLAG_RDRAND -DRTE_MACHINE_CPUFLAG_FSGSBASE -DRTE_MACHINE_CPUFLAG_AVX2  -I/home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/x86_64-native-linuxapp-gcc/include -include /home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/x86_64-native-linuxapp-gcc/include/rte_config.h -O3 -I./ -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Werror    -o ark_ethdev_rx.o -c /home/ngashok/Projects/ikc_cloud/DPDK/dpdk-stable-17.11.2/drivers/net/ark/ark_ethdev_rx.c 
