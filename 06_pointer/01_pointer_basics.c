#include<stdio.h>
//& ---> address of
//* ---> value at address 
int main(){
    int i = 34;
    int *j; //declared a pointer
    //j ek aisa variable he jo integer address ko store karega
    j = &i; //means j ek aisa variable he jo ki i ka address store karega
    printf("The value of i is %d\n", i); //34
    printf("The value of i is %d\n", *j); //34 //means , value at address operator
    printf("The Address of i is %u\n", &i);//address
    printf("The Address of i is %u\n", j);//address ,kyuki j ke ander bhi i ka address hi he
    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n", *(&j));//means value at address of j 
    
    return 0;
}