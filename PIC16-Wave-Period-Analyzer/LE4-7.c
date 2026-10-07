#include <xc.h>

void main () {
	// array for frequency
	unsigned short freq [3] = 
		{0x7C,0x3D,0x1E};
	// array for CCPR1L
	unsigned short arrMSB [3][5] = {
		{0x0C,0x1F,0x3E,0x5D,0x76},
		{0x06,0x0F,0x1F,0x2E,0x3B},
		{0x03,0x07,0x0F,0x17,0x1D},
	};	
	// array for CCP1CON<5:4> w/ PWM mode
	unsigned short arrLSB [3][5] = {
		{0x2C,0x1C,0x2C,0x3C,0x3C},
		{0x1C,0x2C,0x1C,0x3C,0x1C},
		{0x0C,0x3C,0x2C,0x1C,0x2C}	
	};
	int x=0, y=0;
	
	
    TRISC = 0x00; 	// initialize portc as output for oscilloscope
	TRISB = 0x0F; 	// initialize portb as input for buttons			
    T2CON = 0x06; 	// 1:16 prescaler
	
	PR2 = freq[0]; 			// default freq
	CCPR1L = arrMSB[0][0]; 	// default CCPR1L
    CCP1CON = arrLSB[0][0]; // default CCP1CON<5:4> w/ PWM mode

	for (;;){
		// cycles through frequency
		if (RB0 == 1) {
			x++;			
			if (x == 3) x=0;	// reset 
			
			PR2 = freq[x];
			CCPR1L = arrMSB[x][y]; 	// change freq of CCPR1L
	        CCP1CON = arrLSB[x][y]; // change freq of CCP1CON<5:4> w/ PWM mode
	
			//waits
			while(RB0 == 1);
		}

		// cycles through duty cycles
		else if (RB1 == 1) {
			y++;
			if (y == 5) y=0;	// reset
	
			CCPR1L = arrMSB[x][y]; 	// change duty cycle of CCPR1L
		    CCP1CON = arrLSB[x][y]; // change duty cycle of CCP1CON<5:4> w/ PWM mode

			//waits
			while(RB1 == 1);	
		} 
	}
}