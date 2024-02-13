// C program to demonstrate use of Bit-fields
#include <stdio.h>

struct date {
    // date has value between 0 and 31, so 5 bits
    unsigned int d : 5;
 
    // Month has value between 0 and 15, so 4 bits
    unsigned int m : 4;
    // Year has vlaue between 0 to 2024
    unsigned int y : 11;
};
 
int main()
{
    printf("Size of date is %lu bytes\n",
           sizeof(struct date));
    struct date dt = { 10, 02, 2024 };
    printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
    return 0;
}