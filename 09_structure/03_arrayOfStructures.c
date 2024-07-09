#include<stdio.h>
#include<string.h>


struct employee
{
    int IDcode;
    float salary;
    char name[16];
};

int main(){
    struct employee facebook[100];
    //we made a array of 100 employee of facebook
    facebook[0].IDcode = 10;
    facebook[0].salary = 100;
    strcpy(facebook[0].name , "aditya"); //strcpy use kar rahe ho toh put <string.h>

    facebook[1].IDcode = 1035;
    facebook[1].salary = 10.654540;
    strcpy(facebook[1].name , "rohan");
    return 0;
}