#include<stdio.h>
int main(void){
    int a;
    printf("Enter Age of a = ",a);
    scanf("%d",&a);
    const char* result = a >= 18 ? "Adult" : "Minor";
    printf("%s", result);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int age = 20;
//     const char* result = age >= 18 ? "Adult" : "Minor";

//     printf("Status: %s\n", result);

//     return 0;
// }
