#include<stdio.h>
//Swapping of 2 numbers without using 3rd variable
int main(){
    int a, b ;  // a = 10 b= 20
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);

    printf("Before swapping the value of a = %d\nvalue of b = %d\n ",  a , b);
    a = a + b ; //30
    b = a - b ; //10
    a = a - b ; //20

    
    printf("Before swapping the value of a = %d\nvalue of b = %d\n " , a , b);

    return 0;
}