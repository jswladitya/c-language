#include<stdio.h>
//%s is a format specifier just like %d ,%f , it helps to print strings
int main(){
    // char *ptr = "Aditya Bhai";
    char ptr[] = "Aditya Bhai";

    printf("%s", ptr);
    return 0;
}