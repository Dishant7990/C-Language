// Neso video no. 144 C programming


#include<stdio.h>
void fun(char *a)
{
    if (*a && *a != ' ')
    {
        fun(a+1);
        putchar(*a);
    }
}