# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build

# Include any dependencies generated for this target.
include CMakeFiles/prachsim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prachsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prachsim.dir/flags.make

CMakeFiles/messages_xml.h: CMakeFiles/messages.xml
CMakeFiles/messages_xml.h: CMakeFiles/Rel10/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages_xml.h"
	sed -e 's/ *//' -e 's/"/\\"/g' -e 's/^/"/' -e 's/$$/\\n"/' /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/messages.xml > /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/messages_xml.h

CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_ies_defs.h
CMakeFiles/messages.xml: CMakeFiles/Rel10/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages.xml"
	gccxml -DCMAKE_BUILD_TYPE="RelWithDebInfo" -DCMAKER -DFIRMWARE_VERSION="No\ svn\ information" -DPACKAGE_VERSION="Branch:\ \ Abrev.\ Hash:\ \ Date:\ " -DPACKAGE_BUGREPORT="openair4g-devel@lists.eurecom.fr" -DXFORMS -DENABLE_ITTI -DRel10=1 -DS1AP_VERSION=R10 -DX2AP_VERSION=R11 -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=2 -DNB_ANTENNAS_TXRX=2 -DNone=1 -DNone=1 -DENABLE_SECURITY -DENABLE_USE_MME -DNO_RRM -DUSER_MODE -DLOWLATENCY -DOAI_NW_DRIVER_USE_NETLINK -DPACKAGE_NAME="unitary_tests_simulators" -DENB_AGENT -DENB_MODE -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_VCD -DENABLE_VCD_FIFO -DLOG_NO_THREAD -DOPENAIR_LTE -DDRIVER2013 -DENABLE_FXP -DEXMIMO_IOT -DMAX_NUM_CCs=1 -DNEW_FFT -DOPENAIR1 -DPC_DSP -DPC_TARGET -DPHYSIM -DPHY_CONTEXT -DPUCCH -DENABLE_NAS_UE_LOGGING -DNAS_BUILT_IN_UE -DMAC_CONTEXT -DJUMBO_FRAME -DOPENAIR2 -DTRACE_RLC_MUTEX -DLINK_ENB_PDCP_TO_GTPV1U -DASN1_MINIMUM_VERSION=924 -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/Rel10 -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R10.5 -I/home/kote/openairinterface5g-91d8c892/openair3/S1AP -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R11.2 -I/home/kote/openairinterface5g-91d8c892/openair2/X2AP -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/DEFS -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/USRP/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/COMMON -I/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles -I/home/kote/openairinterface5g-91d8c892/openair2/COMMON -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LOG -I/home/kote/openairinterface5g-91d8c892/openair3/COMMON -I/home/kote/openairinterface5g-91d8c892/openair3/UTILS -I/home/kote/openairinterface5g-91d8c892/openair1 -I/home/kote/openairinterface5g-91d8c892/openair2/NAS -I/home/kote/openairinterface5g-91d8c892/openair2 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/kote/openairinterface5g-91d8c892/openair2/LAYER2/PDCP_v10.1.0 -I/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES -I/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/home/kote/openairinterface5g-91d8c892/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/home/kote/openairinterface5g-91d8c892/common/utils -I/home/kote/openairinterface5g-91d8c892/common/utils/itti -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/API/NETWORK -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/EMM/MSG -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/ESM/MSG -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/IES -I/home/kote/openairinterface5g-91d8c892/openair3/NAS/COMMON/UTIL -I/home/kote/openairinterface5g-91d8c892/openair3/SECU -I/home/kote/openairinterface5g-91d8c892/openair3/SCTP -I/home/kote/openairinterface5g-91d8c892/openair3/S1AP -I/home/kote/openairinterface5g-91d8c892/openair2/X2AP -I/home/kote/openairinterface5g-91d8c892/openair3/UDP -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U -I/home/kote/openairinterface5g-91d8c892/targets/COMMON -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/COMMON -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/DEFS -I/home/kote/openairinterface5g-91d8c892/openair2/ENB_APP -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OSA -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/MEM -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LISTS -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/FIFO -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OCG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/MATH -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/TIMER -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OMG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OTG -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/CLI -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OPT -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/OMV -I/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/kote/openairinterface5g-91d8c892/openair3/GTPV1-U/nw-gtpv1u/include -I/home/kote/openairinterface5g-91d8c892 -I/home/kote/openairinterface5g-91d8c892/common/utils/collection/hashtable -I/home/kote/openairinterface5g-91d8c892/common/utils/msc -I/home/kote/openairinterface5g-91d8c892/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/usr/include/libxml2 -I/usr/include/libxml2 -I/usr/include/pgm-5.1 -I/usr/lib/x86_64-linux-gnu/pgm-5.1/include -I/usr/include/atlas -I/usr/include/X11 -fxml=/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/messages.xml /home/kote/openairinterface5g-91d8c892/common/utils/itti/intertask_interface_types.h

CMakeFiles/Rel10/asn1_constants.h: /home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions-a20.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/Rel10/asn1_constants.h"
	/home/kote/openairinterface5g-91d8c892/cmake_targets/tools/generate_asn1 /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/Rel10 /home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions-a20.asn

CMakeFiles/R10.5/s1ap_decoder.c: /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/R10.5/s1ap_decoder.c, CMakeFiles/R10.5/s1ap_encoder.c, CMakeFiles/R10.5/s1ap_xer_print.c, CMakeFiles/R10.5/s1ap_compare.c, CMakeFiles/R10.5/s1ap_ies_defs.h"
	/home/kote/openairinterface5g-91d8c892/cmake_targets/tools/generate_asn1 /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R10.5 /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	python /home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/asn1tostruct.py -f/home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU-Contents.asn -o/home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/R10.5

CMakeFiles/R10.5/s1ap_encoder.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_xer_print.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_compare.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_ies_defs.h: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o: CMakeFiles/prachsim.dir/flags.make
CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o: /home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o   -c /home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c > CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.i

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c -o CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.s

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.requires:
.PHONY : CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.requires

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.provides: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.requires
	$(MAKE) -f CMakeFiles/prachsim.dir/build.make CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.provides.build
.PHONY : CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.provides

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.provides.build: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o: CMakeFiles/prachsim.dir/flags.make
CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o: /home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o   -c /home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c > CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.i

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c -o CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.s

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires:
.PHONY : CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
	$(MAKE) -f CMakeFiles/prachsim.dir/build.make CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build
.PHONY : CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides

CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o

# Object files for target prachsim
prachsim_OBJECTS = \
"CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o" \
"CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o"

# External object files for target prachsim
prachsim_EXTERNAL_OBJECTS =

prachsim: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o
prachsim: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o
prachsim: CMakeFiles/prachsim.dir/build.make
prachsim: libSIMU.a
prachsim: libUTIL.a
prachsim: libSCHED_LIB.a
prachsim: libPHY.a
prachsim: libLFDS.a
prachsim: libITTI.a
prachsim: CMakeFiles/prachsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable prachsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prachsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prachsim.dir/build: prachsim
.PHONY : CMakeFiles/prachsim.dir/build

CMakeFiles/prachsim.dir/requires: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/SIMULATION/LTE_PHY/prachsim.c.o.requires
CMakeFiles/prachsim.dir/requires: CMakeFiles/prachsim.dir/home/kote/openairinterface5g-91d8c892/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
.PHONY : CMakeFiles/prachsim.dir/requires

CMakeFiles/prachsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prachsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prachsim.dir/clean

CMakeFiles/prachsim.dir/depend: CMakeFiles/messages_xml.h
CMakeFiles/prachsim.dir/depend: CMakeFiles/messages.xml
CMakeFiles/prachsim.dir/depend: CMakeFiles/Rel10/asn1_constants.h
CMakeFiles/prachsim.dir/depend: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/prachsim.dir/depend: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/prachsim.dir/depend: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/prachsim.dir/depend: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/prachsim.dir/depend: CMakeFiles/R10.5/s1ap_ies_defs.h
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles/prachsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prachsim.dir/depend

