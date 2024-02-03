#include<stdio.h>

int main(void){
    int a[2][3] = {{1,2,3},{4,5,6}};
    int i,j,sum = 0;
    //For rows
    printf("Row total: ");
    for(i = 0; i<2; i++){
        for ( j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        printf(" %d",sum);
        sum = 0;
    }
    printf("\n");
    //Column rows
    printf("Column total: ");
    for(j = 0; j<3; j++){
        for ( i = 0; i < 2  ; i++)
        {
            sum = sum + a[i][j];
        }
        printf(" %d",sum);
        sum = 0;
    }
    return 0;
}