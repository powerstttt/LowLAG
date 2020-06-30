/*
 * adventures_with_ip.c
 *
 * Main source file. Contains main() and menu() functions.
 */
#include "adventures_with_ip.h"

/*************************** PROJECT DESCRIPTION ********************************
 * LowLAG is created for decreasing the latency while using a sound effect on
 * the ZedBoard. It imports an audio and processes it, then exports the audio
 * to the output ports again with low-latency.
 *
 * More detail can be found on the https://github.com/powerstttt/LowLAG
 * 							   and https://youtu.be/LDZnz3VPQfw
 * Team number: xohw20_262
 * Full project name: LowLAG: Low-Latency Hardware Accelerator of a Sound Effect
 *
 * University name: Eskiþehir Technical University
 * Supervisor name: Ýsmail SAN
 * Supervisor e-mail: isan@eskisehir.edu.tr
 *
 * Team Name: Double Y
 * Participants: Yunus Emre ESEN, Yunus KALKAN
 * Email: esenyunusemre@gmail.com
 * 		  kalkany344@gmail.com
 *
 * Board used: ZedBoard
 * Software and Version: Vivado 2015.1
 *
 */

/*
 * Reuse Information
 * LowLAG is improved from adventures_with_ip project from The Zynq Book
 * Tutorials. It can be found on http://www.zynqbook.com/download-tuts.html.
 */


/* ---------------------------------------------------------------------------- *
 * 									main()										*
 * ---------------------------------------------------------------------------- *
 * Runs all initial setup functions to initialise the audio codec and IP
 * peripheral, before calling the interactive menu system.
 * ---------------------------------------------------------------------------- */
int main(void)
{
	xil_printf("Entering Main...\r\n");
	//Configure the IIC data structure
	IicConfig(XPAR_XIICPS_0_DEVICE_ID);

	//Configure the Audio Codec's PLL
	AudioPllConfig();

	//Configure the Line in and Line out ports.
	//Call LineInLineOutConfig() for a configuration that
	//enables the HP jack too.
	AudioConfigureJacks();

	xil_printf("ADAU1761 configured.\n\r");

	/* Initialise GPIO peripherals */
	gpio_init();

	xil_printf("GPIO peripheral configured.\r\n");

	/* Display interactive menu interface via terminal */
	menu();
    return 1;
}

/* ---------------------------------------------------------------------------- *
 * 									menu()										*
 * ---------------------------------------------------------------------------- *
 * Presented at system startup. Allows the user to select between three
 * options by pressing certain keys on the keyboard:
 * 		's' - 	Audio loopback streaming
 * 		'f' - 	It gives the clean audio and distorted audio.
 * 				When any button is pressed distorted audio is given to the output
 * 				Otherwise, clean audio is given.
 * 		'd' - 	It gives the distorted audio to the output continuously.
 *
 * 	This menu is shown upon exiting from any of the above options.
 * ---------------------------------------------------------------------------- */
void menu(){
	u8 inp = 0x00;
	u32 CntrlRegister;

	/* Turn off all LEDs */
	Xil_Out32(LED_BASE, 0);

	CntrlRegister = XUartPs_ReadReg(UART_BASEADDR, XUARTPS_CR_OFFSET);

	XUartPs_WriteReg(UART_BASEADDR, XUARTPS_CR_OFFSET,
				  ((CntrlRegister & ~XUARTPS_CR_EN_DIS_MASK) |
				   XUARTPS_CR_TX_EN | XUARTPS_CR_RX_EN));

	xil_printf("\r\n\r\n");
	xil_printf("LowLAG Demo\r\n");
	xil_printf("Enter a letter from the keyboard: \r\n's' to stream clean audio, \r\n'f' to distortion when pressed any button, \r\n'd' to distorted audio continuously.\r\n");
	xil_printf("----------------------------------------\r\n");

	// Wait for input from UART via the terminal
	while (!XUartPs_IsReceiveData(UART_BASEADDR));
				inp = XUartPs_ReadReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET);
	// Select function based on UART input
	switch(inp){
	case 's':
		xil_printf("STREAMING AUDIO\r\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		audio_stream();
		break;
	case 'f':
		xil_printf("ENTERING DISTORTION OPERATION\r\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		distortion();
		break;
	case 'd':
		xil_printf("ENTERING CONTINUOUS DISTORTION OPERATION\r\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		distortion_continuous();
		break;
	default:
		menu();
		break;
	} // switch
} // menu()


