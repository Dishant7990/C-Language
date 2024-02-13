#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){
    FILE *ptr = NULL;
    char abc[200];
    
    ptr = fopen("d1.txt", "r");
    //Here by using fopen we simply open the already exits file and doing read from file d1.txt

    if(ptr == NULL){
        printf("Error");
        exit(1);
    }

    // feof indicate file end point...and if it not file end point
    // then loop is continue else it will stop.
    
    while(fgets(abc, 100, ptr) != NULL) {
        printf("%s", abc);
    }
    // Here we only read first 99 latters and 1 for null character
    
    fclose(ptr);
    return 0;
}