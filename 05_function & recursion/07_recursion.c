#include<stdio.h>
//Write a program to calculate factorial of a number using recursion
int factorial(int x);

int main(){
    int a;
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x){
    if(x==1 || x==0)
    return 1;
    //since 0 & 1 factorail ka value 1 hota he
    else{
        return x * factorial(x-1);
        //dhyan se dekho its function ke ander function he its a concept of recursion
    }
}