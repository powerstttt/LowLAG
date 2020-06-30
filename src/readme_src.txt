+++++++++++++++++++++++++++++++++++++++++++++++
+------- Information about /src folder -------+
+++++++++++++++++++++++++++++++++++++++++++++++

This folder contains the source codes of the LowLAG.

/*** VHDL folder ***/
An IP block is created to realize our system, which is distortion effect.
VHDL codes of distortion effect can be found in the vhdl folder

/*** Simulink folder ***/
This folder contains the source codes of distortion sound effect which is implemented on MATLAB&Simulink.
setup.m and playback.m requires for the test and instantiation. *.wav file is also used for test system.
*.slx file is the Simulink model and it contains the model design. Also HDL Coder is run on that model.

/*** lowlag_vivado_project ***/
This folder contains the whole project of LowLAG on Vivado. It was created on Vivado 2015.1.
If you want to test this system, you can follow the instructions in the main readme.txt file.

/*** C folder ***/
This folder contains the C codes for the software. The main code is taken from The Zynq Book Tutorial and
improved for our LowLAG solution. Driver file was created named distortion.addr.h and ip_functions were 
changed. Also main code, which is in the adventures_with_ip.c, was changed for the requirements.
Finally, adventures_with_ip.h file was changed for the IP connection and addresses were defined from
distortion_addr.h

/*** Constraints ***/
This folder contains the constarint file of the project. It has connections for the LED and audio codec.

/*** shared_ip ***/
If you want to build this project on your own, you need to create block design like in complete_design.png
The distortion_ip (custom ip) can be found in ip folder and other ip's can be found in the src/shared_ip 
folder. This ip's are reused from The Zynq Book Tutorial.

NOTE: This project is improved from The Zynq Book Tutorials Example 5 and the other sources is implemented
from there. You can access the tutorial from: http://www.zynqbook.com/download-tuts.html