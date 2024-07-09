#include<stdio.h>
#include<string.h>
//we can make custom datatypes 

struct employee{
    int code;
    float salary;
    char name[10];
}; //this semicolon is important after struct declaration

int main(){

    //ab ham 1st employee ko define karenge
    struct employee e1;
    // here struct employee is a custom datatype & e1 ek variable he 
    //just like, int e1
    e1.code = 100;
    e1.salary = 34.455;
    // e1.name = "Aditya"; //won't work use strcpy for string declaration 

    strcpy(e1.name , "Aditya"); //pehle target fir source

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name); //%s karenge kyuki string he

    return 0;
}