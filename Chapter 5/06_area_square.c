#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %f", pow(side, 2));
    // NOTE: jab bhi pow use karo toh %f use karo kyuki pow double value return karta he
    return 0;
}