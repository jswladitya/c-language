#include<stdio.h>
// Program to find area of rectange useing users data
int main(){
    int length, breadth;
    printf("enter the value of length \n");
    scanf("%d", &length);
    printf("enter the value of breadth \n");
    scanf("%d", &breadth);
    printf("Area of rectangle is %d", length*breadth);

    return 0;
}