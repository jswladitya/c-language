#include<stdio.h>

int main(){
    int age;
    int vipPass = 0; //false
    //vipPass=1;
    //vipPass ek variable ka naam he and variable C me change kia ja sakte he
    

    printf("enter your age\n");
    scanf("%d", &age);

    // if (age <=70 && age>=18)
    if ((age <=70 && age>=18) || vipPass == 1)

    {
        printf("You are above 18 and below 70, You can Drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}


