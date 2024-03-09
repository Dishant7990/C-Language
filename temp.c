#include<stdio.h>

int main(void){
    int arr[10] = {9,8,14,13,17,20,25,74,86,2};
    int i = 0,j;
    printf("----Before asending order---");
    for(int i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }
    int temp[3];
    for(int i = 7; i<10; i++){
        temp[i] = arr[i];
    }
    for(int i = 6; i>=0; i--){

        arr[i + 3] = arr[i];
    }
    for(int i = 0,j = 0; i<3 && j<3; i++, j++){
        arr[i] = temp[j];
    }

    //printf("----After asending order---");
    printf("\n");
    for(int i = 0; i<10; i++){
        printf("%d ", arr[i]);
    }
   // printf("\n\n %d \n",max);
    return 0;
}