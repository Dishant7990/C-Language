#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/*int main(){
    int intType;
    float f;
    char chartype;
    double doubleType;
    short int sINT;
    unsigned int uINT;
    long int LINT;
    long long int LLINT;
    signed long int SLINT;
    printf("The size of integer :  %d\n", sizeof(intType));
    printf("The size of float   :  %lu\n", sizeof(f));
    printf("The size of char    :  %c\n", sizeof(chartype));
    printf("The size of double  :  %lf\n", sizeof(doubleType));
    printf("The size of sINT    :  %hd\n", sizeof(sINT));
    printf("The size of uINT    :  %u\n", sizeof(uINT));
    printf("The size of LINT    :  %ld\n", sizeof(LINT));
    printf("The size of LLINT   :  %lld\n", sizeof(LLINT));
    printf("The size of SLINT   :  %ld\n", sizeof(SLINT));


}*/

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );
    printf("Precision value: %d\n", DBL_DIG );


    return 0;
}