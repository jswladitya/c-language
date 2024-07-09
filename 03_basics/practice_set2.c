//Q --> 3 : Income tax Question
#include<stdio.h>

int main(){
    float tax =0 , income;
    //initially hamne tax=0 kia kyuki ager koi 0 se 250000 tak kama raha he toh use 0% tax dena he islie us case ke lie hamne ye kia
    printf("Enter the Amount\n");
    scanf("f", &income);
    if(income>=250000 && income<= 500000){
        tax = tax + (0.05 * (income - 250000)) ; //means jo shuru ke 2.5 L uspe tax nhi dena hota
    }
    if(income>=500000 && income<= 1000000){
        tax = tax + 0.20 * (income - 500000);
    }
    if(income>= 1000000){
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your tax will be %f \n",tax);
    return 0;
}