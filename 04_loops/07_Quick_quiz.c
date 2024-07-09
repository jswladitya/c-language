#include<stdio.h>
// Write a program to print n natural numbers in reverse order 
int main(){
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);

    for (int i = n ; i ; i--)
    {
        printf("The value of i is %d\n", i);
    }
    
    return 0;
}