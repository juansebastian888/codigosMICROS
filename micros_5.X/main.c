#include <xc.h>
#include "config.h"

void secuencia_A();
void secuencia_B();
void secuencia_C();


void secuencia_A(){
LATD = 0b11001100;
        __delay_ms (1000);
        LATD = 0b00110011;
        __delay_ms (1000);  
   }
void secuencia_B(){
    
    for(int i=0; i<=5; i++){
    LATD = 0b10000000;
    __delay_ms (180);
    LATD = 0b01111111;
    }
        __delay_ms (500);
    
        for(int i=0; i<=5; i++){
    LATD = 0b01000000;
    __delay_ms (180);
    LATD = 0b10111111;
    }
        __delay_ms (500);
        
        for(int i=0; i<=5; i++){
    LATD = 0b00100000;
    __delay_ms (180);
    LATD = 0b11011111;
    }
        __delay_ms (500);
        for(int i=0; i<=5; i++){
    LATD = 0b00010000;
    __delay_ms (180);
    LATD = 0b11101111;
    }
        __delay_ms (500);
        for(int i=0; i<=5; i++){
    LATD = 0b00001000;
    __delay_ms (180);
    LATD = 0b11110111;
    }
        __delay_ms (500);
        for(int i=0; i<=5; i++){
    LATD = 0b00000100;
    __delay_ms (180);
    LATD = 0b11111011;
     }
        __delay_ms (500);
        for(int i=0; i<=5; i++){
    LATD = 0b00000010;
    __delay_ms (180);
    LATD = 0b11111101;
    }
        __delay_ms (500);
        for(int i=0; i<=5; i++){
    LATD = 0b00000001;
    __delay_ms (180);
    LATD = 0b11111110;
    }
        __delay_ms (500);
    
}    

void secuencia_C(){
    for(int i=0; i<=3; i++){
    LATD = 0b10000000;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
    
    for(int i=0; i<=3; i++){
    LATD = 0b01000000;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
        
        for(int i=0; i<=3; i++){
    LATD = 0b00100000;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
    
    for(int i=0; i<=3; i++){
    LATD = 0b00010000;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
    for(int i=0; i<=3; i++){
    LATD = 0b00001000;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
    
    for(int i=0; i<=3; i++){
    LATD = 0b00000100;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }    
    
    for(int i=0; i<=3; i++){
    LATD = 0b00000010;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }
for(int i=0; i<=3; i++){
    LATD = 0b00000001;
        __delay_ms (200);
        LATD = 0b00000000;
        __delay_ms (200);
    }        
}



void main (void){
     //configuracion
    
    OSCCON = 0x38;
    OSCTUNE = 0x00;
    BORCON = 0x00;
    
    //CONFIGURACION APP
    ANSELD = 0x00;
    TRISD = 0b00000000;
    
    //loop lo que se repite
    while(1){
        secuencia_A();
        __delay_ms(1000);
        secuencia_B();
        __delay_ms(1000);
        secuencia_C();
        
    }

}
