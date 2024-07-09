#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    // Here we first took the value of a from user
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    // then we put a = 0 first & since 0<10 so it become true and code i block get executed
    // due to a++ condition now a = 1 (coz we are in the loop) and then again same then happens till a<10
    return 0;
}
