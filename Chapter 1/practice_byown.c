#include<stdio.h>
//Program to print volume of sphere from users data
int main(){
    int r;
    float pi;
    printf("Enter the value of r \n");
    scanf("%d",&r);
    printf("Enter the value of pi \n");
    scanf("%f",&pi);
    printf("The volume of sphere is %f\n", pi*r*r*r);
    return 0;
}