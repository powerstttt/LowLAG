/*
 * File Name:         hdl_prj\ipcore\distortion_ip_v4_10_a\include\distortion_ip_addr.h
 * Description:       C Header File
 * Created:           2020-06-22 19:51:14
*/

#ifndef DISTORTION_IP_H_
#define DISTORTION_IP_H_

#define  IPCore_Reset_distortion_ip       0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_distortion_ip      0x4  //enabled (by default) when bit 0 is 0x1
#define  IPCore_Strobe_distortion_ip      0x8  //write 1 to bit 0 after write all input data
#define  IPCore_Ready_distortion_ip       0xC  //wait until bit 0 is 1 before read output data
#define  IPCore_Timestamp_distortion_ip   0x10  //contains unique IP timestamp (yymmddHHMM): 2006221951
#define  Fin_Data_distortion_ip           0x100  //data register for Inport Fin
#define  Fout_Data_distortion_ip          0x104  //data register for Outport Fout

#endif /* DISTORTION_IP_H_ */
