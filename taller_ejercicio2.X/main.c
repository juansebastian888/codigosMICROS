#include <xc.h>
#include "config.h"

char n=0;

void secuencia_A(){
    
    for(int i=0; i<8; i++){
        PORTB =(1<<n);
        __delay_ms(200);
        n=n++;
      
    }
}

void secuencia_B(){
    
    for(int j=0; j<8; j++){
        PORTB = (1<<n);
        __delay_ms(200);
        n=n--;
    }
}



void main (void){

    OSCCON   =0x38;
    OSCTUNE = 0x00;
    BORCON = 0x00;
    
    ANSELB = 0x00;
    TRISB = 0x00;
    LATB = 0x00;
    
   while(1){
       secuencia_A();
       __delay_ms(400);
       n=7;
       secuencia_B();
   
   } 
    return;
}