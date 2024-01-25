//How many times will "D" be printed on the screen?
#include<stdio.h>
int main(void){
    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
            break;
        else{
            i++;
            continue;
        }
        printf("D");
    }
    return 0;
}