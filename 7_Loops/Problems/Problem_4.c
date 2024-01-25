#include<stdio.h>

int main(void){
    int i = 0;
    for(printf("One\n"); i < 3 && printf(""); i++){
        printf("Hi!\n");
    }
    return 0;
}