#include <xc.h>
#include"config.h"

void main(void){
   
    OSCCON = 0x38;
   OSCTUNE = 0x00;
    BORCON = 0x00;
    decoInit();
    
    
    
    while(1){
    
    }
    return;
  }

