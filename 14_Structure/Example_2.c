// #include <stdio.h>

// typedef struct functionPointer {
//     void (*ptr1)(int);      // Changed to void return type and int parameter
//     int (*ptr2)(int, int);
// } fun_t;

// void function1(int x) {
//     printf("You Enter %d in variable X.\n", x);
// }

// int function2(int a, int b) {
//     return a + b;
// }

// int main(void) {
//     fun_t function;

//     function.ptr1 = &function1;
//     function.ptr2 = &function2;

//     function.ptr1(100);
//     int result = function.ptr2(100, 20);
//     printf("Sum of variables is %d\n", result);

//     return 0;
// }



#include <stdio.h>

typedef struct  {
    void (*fun1)(int);      // Changed to void return type and int parameter
    int (*fun2)(int, int);
} funptr_t;

void function1(int x) {
    printf("You Enter %d in variable X.\n", x);
}

int function2(int a, int b) {
    return a + b;
}

int main(void) {
    funptr_t function = {function1,function2};
    function.fun1(200);
    
    int result =function.fun2(300,400);
    printf("Sum of variables is %d\n", result);

    return 0;
}
