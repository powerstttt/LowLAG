**************************************************************
********************** TEAM DESCRIPTION **********************
**************************************************************

Team number: xohw20_262
Project Name: LowLAG: Low-Latency Hardware Accelerator of a 
	      Sound Effect
Date: 30/06/2020
Version of uploaded archieve: 1

Link to YouTube Video: https://youtu.be/LDZnz3VPQfw
Link to GitHub repository: https://github.com/powerstttt/LowLAG

University name: Eskişehir Technical University
Supervisor name: İsmail SAN
Supervisor e-mail: isan@eskisehir.edu.tr

Team Name: Double Y
Participants: Yunus Emre ESEN, Yunus KALKAN
Email: esenyunusemre@gmail.com
       kalkany344@gmail.com

Board used: ZedBoard
Software and Version: Vivado 2015.1


**************************************************************
******************* PROJECT DESCRIPTION **********************
**************************************************************

This project aims to decrease the latency for an audio signal
between input and output while processing it to applying on it
a sound effect. LowLAG is implemented on ZedBoard which uses
the ZC7020 chip. It is designed as use hardware and software
together. More information can be found in project report on
doc folder.

Directory Structure:
This archieve contains 4 folders named doc, ip, src and 
test_results.
doc: You can find the project report in this directory. This
     report also has all detail for this project.

ip:  You can find the IP files and the MATLAB&Simulink project
     in the Simulink_sources directory. HDL Coder outputs are
     available in hdl_prj folder. IP files can be found in the
     distortion_ip_v_10_a folder which is ready to add IP 
     repository. More detail can be found in readme_ip.txt.

src: This folder contains the all source codes that are 
     generated for LowLAG. Also, full project is in that file
     that is created with Vivado 2015.1. More detail can be
     found in the readme_src.txt.

test_results: This folder contains the test results for the
     implemented system on ZedBoard and designed system in
     Simulink. You can find more detail in the 
     readme_test_results.txt. 


**************************************************************
*********************** INSTRUCTIONS *************************
**************************************************************

To test our design please follow these instructions below.

1. Open lowlag_test folder in the src/lowlag_vivado_project
   in the student_xohw20_262_SAN_20200630_1 archive.
2. Click lowlag_test.xpr and open the project in Vivado.
3. Now you can see the block design of the project. You can
   launch the SDK to test design. The bitstream was already
   generated.
4. You need to open a terminal for making UART connection.
   (Serial connection, COMx from your computer, 
   115200 bound rate)
5. Program FPGA to your ZedBoard.
6. Run the distortion_test program.
7. You need to connect your microphone (or an aux connection
   from another device) to LINE IN (blue) input, and headphone
   to LINE OUT (green) or HPH OUT (black) output.
	!!! Be careful when you connect your headphone to    !!!
	!!! HPH OUT (black), it can give high volume and it  !!!
	!!! may hurt your ear.		     		     !!!
8. Now, you need to give an input to your UART terminal.
   You can set these inputs:
	s: Direct sound
	f: Distortion effect when button is pressed
	d: Distortion continuously
	q: exit to main menu

If you want to create this project in a new project, you need
to create a block design like in src/complete_design.png
You can find the distortion IP (custom IP) from 
ip/distortion_ip_v4_10_a folder and also other reused IP's
can be find in the src/shared_ip.
Then you can create new application on the SDK with the codes
in the src/C folder.

**************************************************************
********************** AVAILABLE LINKS ***********************
**************************************************************

YouTube Link: https://youtu.be/LDZnz3VPQfw
GitHub Link: https://github.com/powerstttt/LowLAG