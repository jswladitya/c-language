#include<stdio.h>
#include<string.h>

int main(){
    char st1[34] = "aditya";
    char *st2 = " jaiswal";
    int val = strcmp(st1,st2); // if equal string he to value will bw 0 
    //if any mismatch founded the it will print +1 or -1 according to the 
    //(ascii value of 1st string ka element - ascii value of 2nd string ka element)
    printf("Now the val is %d", val); //1
    //since a = 97 & j = 106
    return 0;
}