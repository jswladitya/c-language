// NOTE: call by value ---> ham yaha function ko call karte he by passing the values , yaha a & b ki copy banegi toh ham original values ko change nahi karsakte main function ke ander wale


#include<stdio.h>
int sum (int a , int b);

int main(){
    int a=4,b=5;
    printf("The value of a & b is %d and %d\n",a,b);
    printf("The value of 4 + 5 is %d\n", sum(a,b));
    printf("The value of a & b after function call is %d annd %d\n",a,b);

    return 0;
}

int sum (int a , int b){
    int c;
    c = a + b;
    //ek function ke madhayam se main ke variables ko change nahi karsakte bina pointer ke
    b= 57267;
    c=28346;
    return c;
}








