#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("You are above 90, You cannot Drive");
    }
    else
    {
        printf("You can drive");
    }

    // = operator koi bhi non zero value ko true manta he aur execute kar deta he
//    if(age= 50){
//     printf("Half centary");
//    }


    return 0;
}