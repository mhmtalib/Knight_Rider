unsigned char ledStatus = 8; //0000 1000
void main () {
	PCON.OSCF = 1;
	CMCON = 0x07;

	TRISA = 0xFF;
	TRISB = 0x00;

	PORTB = ledStatus;

	while(1) {
		if (RA0_bit == 0){
				ledStatus = ledStatus >> 1;
				if (ledStatus == 0){
						ledStatus = 128;
              }
        }else{
                ledStatus = ledStatus << 1;
                if (ledStatus == 0){
                        ledStatus = 1;
              }
        }

            PORTB = ledStatus;
            delay_ms(200);

        }
}


