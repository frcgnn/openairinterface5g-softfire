# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# compile C with /usr/bin/cc
C_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -g -DMALLOC_CHECK_=3 -O2 -fPIC -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/Rel10 -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R10.5 -I/home/kote/openairinterface5g-91d8c892/openair3/S1AP -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R11.2 -I/home/kote/openairinterface5g-91d8c892/openair2/X2AP -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/DEFS -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/USRP/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/COMMON -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles -I/home/kote/openairinterface5g-91d8c892/openair2/COMMON -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LOG -I/home/kote/openairinterface5g-91d8c892/openair3/COMMON -I/home/kote/openairinterface5g-91d8c892/openair3/UTILS -I/home/kote/openairinterface5g-91d8c892/openair1 -I/home/kote/openairinterface5g-91d8c892/openair2/NAS -I/home/kote/openairinterface5g-91d8c892/openair2 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/PDCP_v10.1.0 -I/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES -I/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/home/kote/openairinterface5g-91d8c892/common/utils -I/home/kote/openairinterface5g-91d8c892/common/utils/itti -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/API/NETWORK -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/EMM/MSG -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/ESM/MSG -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/IES -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/UTIL -I/home/kote/openairinterface5g-91d8c892/openair3/SECU -I/home/kote/openairinterface5g-91d8c892/openair3/SCTP -I/home/kote/openairinterface5g-91d8c892/openair3/UDP -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U -I/home/kote/openairinterface5g-91d8c892/targets/COMMON -I/home/kote/openairinterface5g-91d8c892/openair2/ENB_APP -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OSA -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/MEM -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LISTS -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/FIFO -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OCG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/MATH -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/TIMER -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OMG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OTG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/CLI -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OPT -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OMV -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U/nw-gtpv1u/include -I/home/kote/openairinterface5g-91d8c892 -I/home/kote/openairinterface5g-91d8c892/common/utils/collection/hashtable -I/home/kote/openairinterface5g-91d8c892/common/utils/msc -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/usr/include/libxml2 -I/usr/include/pgm-5.1 -I/usr/lib/x86_64-linux-gnu/pgm-5.1/include -I/usr/include/atlas -I/usr/include/X11    -DUPDATE_RELEASE_9 -DUPDATE_RELEASE_10

C_DEFINES = -DASN1_MINIMUM_VERSION=924 -DCMAKER -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_FXP -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_SECURITY -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENABLE_VCD_FIFO -DENB_AGENT -DENB_MODE -DEXMIMO_IOT -DFIRMWARE_VERSION="\"No svn information\"" -DJUMBO_FRAME -DLINK_ENB_PDCP_TO_GTPV1U -DLOG_NO_THREAD -DLOWLATENCY -DMAC_CONTEXT -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=2 -DNB_ANTENNAS_TXRX=2 -DNEW_FFT -DNO_RRM -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOPENAIR1 -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"unitary_tests_simulators\" -DPACKAGE_VERSION="\"Branch:  Abrev. Hash:  Date: \"" -DPC_DSP -DPC_TARGET -DPHYSIM -DPHY_CONTEXT -DPUCCH -DRel10=1 -DS1AP_VERSION=R10 -DTRACE_RLC_MUTEX -DUSER_MODE -DX2AP_VERSION=R11 -DXFORMS -Doai_eth_transpro_EXPORTS

