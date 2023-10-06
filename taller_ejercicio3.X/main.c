#include <xc.h>
#include "config.h"

#define pulsador1 (PORTBbits.RB0)
#define pulsador2 (PORTBbits.RB1)

#define LOW 0
#define HIGH 1

while(1){
    if(pulsador1 == LOW && pulsador2 == LOW){
        
    }
}







void main(void){
    
    OSCCON = 0x38;
    OSCTUNE = 0x00;
    BORCON = 0x00;
    
    ANSELB = 0x00;
    TRISB = 3;
    LATB = 0x00;
    
}
