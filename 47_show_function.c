#include <stdio.h>

struct employee
{
    int code;
    float salary;
};

void show(struct employee emp)
{
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
}
int main()
{
    struct employee e1;

    e1.code = 100;
    e1.salary = 34.454;

    show(e1);

    printf("The Code of employee is: %d\n", e1.code);

    return 0;
}