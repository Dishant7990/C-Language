#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Taking input from user
// User can write in file 

int main(void){
    FILE *ptr = NULL;
    int i;
    
    char abc[200];
    ptr = fopen("d1.txt", "w");
    //Here by using fopen we simply creat the file and doing write to file d1.txt


    if(ptr == NULL){
        printf("Error");
        exit(1);
    }
    puts("Enter the String: \n");
    gets(abc);
    for(i = 0; i != strlen(abc); i++){

    fputc(abc[i], ptr);
    }

    fclose(ptr);
    return 0;
}