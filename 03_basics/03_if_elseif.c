#include<stdio.h>

int main(){
    int num;
    printf("Enter The number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("youe number is 1 \n");
    }
    else if (num == 2)
    {
        printf("youe number is 2 \n");
    }
    else if (num == 3)
    {
        printf("youe number is 3 \n");
    }
    else
    {
        printf("Its not your number \n");
    }
    
    return 0;
}