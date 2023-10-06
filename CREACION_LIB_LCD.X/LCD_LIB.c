#include "LCD_LIB.h"
#include<xc.h>
#include <pic16f1939.h>

void ADC_Init(void){
   ADCON1bits.ADCS = 0B110;  
   ADCON1bits.ADNREF = 0;
   ADCON1bits.ADPREF = 0b00;
   ADCON0bits.ADON = 1;
}


