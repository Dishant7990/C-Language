#include<stdio.h>
#pragma pack(1)
struct Student
{
    char name[35];
    int roll_no;
    float marks;
}var;// Var is called as ""[object]"" in stucture
union data
{
    char name[35];
    int roll_no;
    float marks;
    int batch;
} a;

int main(void){
    printf("Size of Structure is %d\n", sizeof(var));
    printf("Size of Union is %d\n", sizeof(a));

    return 0;
}