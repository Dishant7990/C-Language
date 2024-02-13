#include<stdio.h>

int main(void){
    
    typedef struct 
    {
        int STD;
        char *Name;
        int Enrollment_no;
        float Marks;
    }stu_t;


    stu_t s1 = {5, "Vishal",12345,85.5};
    
    
    //Designated Initialization
    stu_t s2 = {.Name = "Manoj", .STD = 12, .Enrollment_no = 52525, .Marks = 75.98};
    
    printf(" %d\n %s\n %d\n %.2f\n", s1.STD ,s1.Name, s1.Enrollment_no , s1.Marks);
    printf(" %d\n %s\n %d\n %.2f\n", s2.STD ,s2.Name, s2.Enrollment_no , s2.Marks);    

    return 0;
}