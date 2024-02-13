// Array in structure using Dynamic allocation...
#include<stdio.h>
#include<stdlib.h>

#define N 2
#define MAX_NAME_LENGTH 50

int main(void) {
    typedef struct Student {
        int STD;
        char *Name;
        int Enrollment_no;
        float Marks;
    } stu;

    stu s[N];
    
    int i;

    for(i = 0; i < N; i++) {
        s[i].Name = (char *)malloc(MAX_NAME_LENGTH * sizeof(char)); // Allocate memory for name
        if (s[i].Name == NULL) {
            printf("Memory allocation failed for student name.\n");
            return 1;
        }

        printf("Enter Std of student:\n");
        scanf("%d", &s[i].STD);
        printf("Enter student name:\n");
        scanf("%s", s[i].Name);
        printf("Enter Enrollment no of student:\n");
        scanf("%d", &s[i].Enrollment_no);
        printf("Enter Marks of student:\n");
        scanf("%f", &s[i].Marks);
    }

    printf("\n");

    for(i = 0; i < N; i++) {
        printf("\n\nStudent '%d' Details: \n", i + 1);
        printf("Standard :       %d\n", s[i].STD);
        printf("Name :           %s\n", s[i].Name);
        printf("Enrollment no :  %d\n", s[i].Enrollment_no);
        printf("Marks :          %.2f\n", s[i].Marks);
    }

    // Free dynamically allocated memory
    for (i = 0; i < N; i++) {
        free(s[i].Name);
    }

    return 0;
}
/*
//Without using Dynamic memory allocation
#include<stdio.h>

#define N 2
#define MAX_NAME_LENGTH 50

int main(void) {
    typedef struct Student {
        int STD;
        char Name[MAX_NAME_LENGTH];
        int Enrollment_no;
        float Marks;
    } stu;

    stu s[N];
    int i;

    for(i = 0; i < N; i++) {
        printf("Enter Std of student:\n");
        scanf("%d", &s[i].STD);
        printf("Enter student name:\n");
        scanf("%s", s[i].Name);
        printf("Enter Enrollment no of student:\n");
        scanf("%d", &s[i].Enrollment_no);
        printf("Enter Marks of student:\n");
        scanf("%f", &s[i].Marks);
    }

    printf("\n");

    for(i = 0; i < N; i++) {
        printf("Student '%d' Details: \n", i + 1);
        printf("Standard :       %d\n", s[i].STD);
        printf("Name :           %s\n", s[i].Name);
        printf("Enrollment no :  %d\n", s[i].Enrollment_no);
        printf("Marks :          %.2f\n", s[i].Marks);
    }

    return 0;
}
*/