#include <xc.h>
#include "config.h"

void secuencia_A();
//void secuencia_B();


//configuraciones generales
    
    //ciclo loop
        
        void secuencia_A(){
            LATB = 0b00000001;
            __delay_ms (150);
            
            LATB = 0b00000010;
            __delay_ms(150);
            
            LATB = 0b00000100;
            __delay_ms(150);
            
            LATB = 0b00001000;
            __delay_ms(150);
            
            LATB = 0b00010000;
            __delay_ms(150);
            
            LATB = 0b00100000;
            __delay_ms(150);
            
            LATB = 0b01000000;
            __delay_ms(150);
            
            LATB = 0b10000000;
            __delay_ms(150);
            
            LATB = 0b00000000;
            __delay_ms(200);
            
            LATB = 0b10000000;
            __delay_ms(150);
           
            LATB = 0b01000000;
            __delay_ms(150);
            
            LATB = 0b00100000;
            __delay_ms(150);
            
            LATB = 0b00010000;
            __delay_ms(150);
            
            LATB = 0b00001000;
            __delay_ms(150);
            
            LATB = 0b00000100;
            __delay_ms(150);
            
            LATB = 0b00000010;
            __delay_ms(150);
           
            LATB = 0b00000001;
            __delay_ms(0150);
            
        }
        void main(void){
        
            OSCCON = 0x38;
            OSCTUNE = 0x00;
            BORCON = 0x00;
            
            
            ANSELB = 0x00;
            TRISB = 0b00000000; 
            LATB = 0x00;
        
        while(1){
            
            secuencia_A();
            __delay_ms(400);
        }
    
        }