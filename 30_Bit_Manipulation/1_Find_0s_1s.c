
#include <stdio.h>

int main() {
    
    int a = 0x52;    // Here We give Hex number And Hex number have

    int one = 0, zero = 0;

    /*
    For Finding any numbers last bit perform AND(&) operation with 0x01
    If output is 1 then Condition is True 
    If Output is 0 then Condition is False then else part execute

    
        0x52     0101 0010
      & 0x01   & 0000 0001
    ---------------------------------
        0x00     0000 0000
    */

    for(int i = 0; i<8; i++){
    
    if(a & 0x01){
        one++;
    }

    else{
        zero++;
    }
    a >>= 1; //Here We simply Shift 1 bit to right side and 'a' Becomes 0010 1001
    }


    printf("One's = %d\nZero's = %d",one , zero);
    return 0;
}