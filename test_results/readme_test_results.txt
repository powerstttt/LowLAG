This folder contains the test result for both SoC design and Simulink model.

* LowLAG_latency.png
You can see the latency for the LowLAG on the ZedBoard solution in this picture.
----------------------------------------------------------------------------------------------


* simulink_profiling
You can see the results for the simulink profiling. These results are belong to
different sample size: 64, 128, 256, 512, 1024.
Latency values are represented in that tables, and latency values are calculated
with added them for input and output ports.

For example, when you will see the sample_64 results below

Name						Time			Calls	Time/call	
distortion_v4_1_saturation.Outputs.Major	4.98437500	80.2%	3446	0.001446423389	
distortion_v4_1_saturation/Audio Device Reader 	4.10937500	66.1%	3446	0.001192505804	
distortion_v4_1_saturation/Audio Device Writer	0.79687500	12.8%	3446	0.000231246373
distortion_v4_1_saturation/Distortion		0.03125000	0.5%	3446	0.000009068485

The result in the first row represents the latency for outputs major, 
second row represents the latency for input, 
third row represents the latency for output,
fourth row represents the latency for distortion block in Simulink.

Total latency can be calculated adding them all.
latency for sample_64 with ASIO4ALL v2 driver is 2.8 ms in theoretical.
But this is not worked well. The audio was interrupted while listening.
The other results have not an interrupt when listening your own voice.
----------------------------------------------------------------------------------------------