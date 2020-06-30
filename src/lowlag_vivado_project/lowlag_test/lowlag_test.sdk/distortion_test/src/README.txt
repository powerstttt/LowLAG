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

University name: Eskiþehir Technical University
Supervisor name: Ýsmail SAN
Supervisor e-mail: isan@eskisehir.edu.tr

Team Name: Double Y
Participants: Yunus Emre ESEN, Yunus KALKAN
Email: esenyunusemre@gmail.com
       kalkany344@gmail.com

Board used: ZedBoard
Software and Version: Vivado 2015.1

**************************************************************
*********************** INSTRUCTIONS *************************
**************************************************************

To test our design please follow these instructions below.

1. Open src folder in the student_xohw20_262_SAN_20200630_1
2. Click lowlag_test.xpr and open the project in Vivado.
3. Now you can see the block design of the project. You can
   launch the SDK to test design. The bitstream was already
   generated.
4. You need to open a terminal for making UART connection.
5. Program FPGA to your ZedBoard.
6. Run the distortion_trial program.
7. You need to connect your microphone (or an aux connection
   from another device) to LINE IN (blue) input, and headphone
   to LINE OUT (green) or HPH OUT (black) output.
	!!! Be careful when you connect your headphone to    !!!
	!!! HPH OUT (black), it can give high volume and it  !!!
	!!! may hurt your ear.		     		             !!!
8. Now, you need to give an input to your UART terminal.
   You can set these inputs:
	s: Direct sound
	f: Distortion effect when button is pressed
	d: Distortion continuously
	q: exit to main menu