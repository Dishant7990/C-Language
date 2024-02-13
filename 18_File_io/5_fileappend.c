#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    FILE *ptr = NULL;
    char abc[200];
    
    ptr = fopen("d1.txt", "a");

    if(ptr == NULL){
        printf("Error");
        exit(1);
    }

    printf("Enter the content you want to Append:\n");
    gets(abc);
    fputs(abc, ptr);
    
    fclose(ptr);
    return 0;
}
