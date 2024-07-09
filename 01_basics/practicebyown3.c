#include <stdio.h>
//Swapping of 2 numbers using 3rd variable
int main()
{
    int a, b, c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Before swapping a = %d\n and b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    // sabse pehle a me b daaal dete he , phir b ko bol dete he tu ab c he , phir c me ham a daal dete he
    printf("Before swapping a = %d\n and b = %d\n", a, b);

    return 0;
}