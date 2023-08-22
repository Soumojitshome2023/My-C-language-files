#include<stdio.h>

typedef struct employee{
    int code;
    float salary;
} emp;                  // struct employee = emp   

int main(){
    
    emp e1;       

    e1.code = 100;
    e1.salary = 34.454;

    printf("The Code of employee is: %d\n", e1.code);
    printf("The Salary of employee is: %f\n", e1.salary);

    return 0;
}