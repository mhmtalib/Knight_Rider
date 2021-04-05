unsigned char ledStatus = 1;
unsigned char count = 0;

 
void main () {

     PCON.OSCF = 1;
     CMCON = 0x07;

     TRISA = 0xFF; 
     TRISB = 0x00; 

     PORTB = 0x00;

     while (1) {
        if (RA0_bit == 1) {
             if (count < 7){
                  PORTB = ledStatus;
                  delay_ms(200);
                  ledStatus = ledStatus << 1;
               }
                
             else if (count < 14){
                 PORTB = ledStatus;
                 delay_ms(200);
                 ledStatus = ledStatus >> 1;
               }
                
                count++;
                
                
             if (count == 14){
                count=0;
               }
           }    

    }        

}