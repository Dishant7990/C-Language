#include<stdio.h>

int main(int argc, char* argv[]){
    printf("Program name is %s", argv[0]);

    if(argc == 1){
        printf("\n No Extra Command Line Argument Passed"
               "Other Than Pragram name");
    }

    if(argc == 2){
        printf("\n Number of Argument passed : %d\n", argc);
        printf("---Following are the command line "
               "Argument passed----");
    }

    for (int i = 0; i < argc; i++)
    {
        printf("\nargv[%d] : %s\n", i, argv[i]);
    }
    
    return 0;
}