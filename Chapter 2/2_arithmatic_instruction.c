#include <stdio.h>
#include<math.h>
int main()
{
    int a = 3;
    int b = 5;
    
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);


    int z;
    z = b * a;
    //b*a = z // not possible
    printf("The value of z is : %d\n", z);

    printf("5 when divided by 2 leaves remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves remainder of %d\n", 5%-2);
//Numerator ka jo bhi sign ho wahi sign ata he
//There is no operator to perform exponentiation in C

// To print exponentiation use pow function  also add #include<math.h> Also use %f coz it returns double

printf("The value of 4 to the power 5 is %f\n ", pow(4,5));


    return 0;
}