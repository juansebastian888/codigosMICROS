#include "SEVEN_SEG_LIB.h"

char deco_cc_values[10]={63,6,91,79,102,109,125,7,127,103};
char deco_ac_values[10]={192,249,164,176,153,146,130,248,128,152};

void decoInit(){
    ANSEL_PORT= 0x00;
    TRIST_PORT= 0x00;
}
void  decoAC (char num){

}
void decoCC(char num ){
    
    SEGA = (deeco_cc_values[num]&1)  != 0 ?1:0;
    SEGB = (deeco_cc_values[num]&2)  != 0 ?1:0;
    SEGC = (deeco_cc_values[num]&4)  != 0 ?1:0;
    SEGD = (deeco_cc_values[num]&8)  != 0 ?1:0;
    SEGE = (deeco_cc_values[num]&16) != 0 ?1:0;
    SEGF = (deeco_cc_values[num]&32) != 0 ?1:0;
    SEGG = (deeco_cc_values[num]&64) != 0 ?1:0;
    
    
       LAT_PORT = deco_cc_values[num]; 
        
    }
    

