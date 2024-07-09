// program to print address of a variable
// Q:1
//  #include<stdio.h>

// int main(){
//     int a;
//     printf("The address of variable a is %u\n",&a);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a = 6;
    int *ptr; // we made a pointer variable
    ptr = &a; // we put an address of a variable a in pointer
    printf("The address of variable a is %u\n", ptr);
    printf("The Value of variable a is %d\n", *ptr); // ptr ka matlab he address and * lagaya us pointer ke ander jo value he uskelie

    return 0;
}