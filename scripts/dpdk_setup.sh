#!/bin/bash

RTE_SDK=/home/ngashok/Projects/ikc_cloud/3rdparty/dpdk/dpdk-stable-17.11.2/
RTE_TARGET=$RTE_SDK/x86_64-native-linuxapp-gcc

echo "Setting the DPDK dev environment "
echo -n "Enter the number of hugepages want to set : \n"

read no_of_hugepages
echo $no_of_hugepages > /sys/kernel/mm/hugepages/hugepages-2048kB/nr_hugepages

echo "Hugepages created"

if [ -d /mnt/huge ] ; then
  echo "Mount point is present \n"
  else
    mkdir /mnt/huge
    fi

    echo "/mnt/huge is available "
    mount -t hugetlbfs nodev /mnt/huge


    echo "Configuring the DPDK with x86_64 \n"
    sudo modprobe uio
    sudo insmod $RTE_TARGET/kmod/igb_uio.ko
    sudo insmod $RTE_TARGET/kmod/rte_kni.ko

    ifconfig

    $RTE_SDK/usertools/dpdk-devbind.py --status

    echo -n "Enter the network intergace name that needed to be linked with dpdk: "
    read interface_name
    ifconfig $interface_name down
    $RTE_SDK/usertools/dpdk-devbind.py -b igb_uio $interface_name

    echo -n "Enter the network intergace name that needed to be linked with dpdk: "
    read interface_name
    ifconfig $interface_name down
    $RTE_SDK/usertools/dpdk-devbind.py -b igb_uio $interface_name

