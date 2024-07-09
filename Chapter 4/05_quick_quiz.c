#include <stdio.h>
// Write a programm to print first n natural numbers from 1 to 10
int main()
{
    int i =1;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf("The number is %d\n", i);
        i++;
    } while (i < n);

    return 0;
}