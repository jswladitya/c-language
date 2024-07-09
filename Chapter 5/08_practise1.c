//Q1--> Write a program using function to find average of three numbers

#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The value of average of 3 numbers will be %f\n", average(a,b,c));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result =(float)((a + b + c)/3);
    //since 3 integeer ka sum integer hoga & unka int se division bhi integer hi hoga
    //islie we typecaste it in float
    return result;
}

//NOTE: har function ki Apni ek alag local variables hote he