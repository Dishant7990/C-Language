#include <stdio.h>
#include <string.h>

int main() {
    char str[500] = "madam";
    int count = strlen(str);
    int i, j;
    char str2[122];
    for(int i = 0; i<count; i++){
        str2[i] = str[i];
    }
    str2[count] = '\0';
   
    printf("Original String: %s\n", str);

    for (i = 0, j = count - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("Reversed String: %s\n", str);
    printf("Original String: %s\n", str2);
    if(strcmp(str, str2) == 0){
        printf("Palimdrom!!!");
    }else{
        printf("Not P");}
    return 0;
}
