// #include<stdio.h>

// int main(void){
//     FILE* fptr;
//     char display[30];
//     fptr = fopen("text.txt", "r");
//     if(fptr == NULL){
//         printf("File was not detected!!!\n");
//         return 1;// return error 
//     }

//     while(!feof(fptr)){
//         fread(display ,sizeof(display), 1,fptr);
        
//         printf("String is \n%s\n", display);
//     }
//     fclose(fptr);
//     return 0;
// }
#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

void generate_fibonacci_series(int count) {
    printf("Fibonacci Series:\n");
    for (int i = 0; i <= count; i++) {
        printf("%d. %llu\n", i, fibonacci(i));
    }
}

int main() {
    generate_fibonacci_series(80);
    return 0;
}

