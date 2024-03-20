#include<stdio.h>

int main(void){
    FILE* fptr;
    char display[30];
    fptr = fopen("text.txt", "r");
    if(fptr == NULL){
        printf("File was not detected!!!\n");
        return 1;// return error 
    }

    while(!feof(fptr)){
        fread(display ,sizeof(display), 1,fptr);
        
        printf("String is \n%s\n", display);
    }
    fclose(fptr);
    return 0;
}