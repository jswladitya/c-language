#include <stdio.h>
#include <string.h>

struct employee
{
    int IDcode;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1, e2, e3;
    //for e1 
    printf("Enter the value for IDcode of e1\n");
    scanf("%d", &e1.IDcode);

    printf("Enter the value for salary of e1\n");
    scanf("%f", &e1.salary);

    printf("Enter the name of e1\n");
    scanf("%s", e1.name); //kyuki ye already ek array he islie isme & nahi ayega

//for e2
    printf("Enter the value for IDcode of e2\n");
    scanf("%d", &e2.IDcode);

    printf("Enter the value for salary of e2\n");
    scanf("%f", &e2.salary);

    printf("Enter the name of e1\n");
    scanf("%s", e2.name);

//for e3
    printf("Enter the value for IDcode of e3\n");
    scanf("%d", &e3.IDcode);

    printf("Enter the value for salary of e3\n");
    scanf("%f", &e3.salary);

    printf("Enter the name of e1\n");
    scanf("%s", e3.name);
    return 0;
}