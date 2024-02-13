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

    fgets(abc, 20, ptr);// Here we only read first 19 latters and 1 for null character
    printf("%s", abc);

    fclose(ptr);
    return 0;
}