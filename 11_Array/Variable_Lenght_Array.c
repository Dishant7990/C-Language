#include <stdio.h>

void exampleFunction(int size) {
    // Variable-length array (VLA) with automatic storage duration
     int dynamicArray[size];

    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2;
    }
    for (int i = 0; i < size; ++i) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");
}

int main() {
    // Static storage duration array
    static int staticArray[5] = {1, 2, 3, 4, 5};
    exampleFunction(3);

    // Error: Variable-length array cannot have static storage duration
    // static int staticVLA[3]; // This line would result in a compilation error

    return 0;
}
