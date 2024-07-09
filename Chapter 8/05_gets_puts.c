#include<stdio.h>

int main(){
    char s[34];
    printf("enter your name:\n");
    gets(s);
    puts(s); // after inputting it print same string in next line
    printf("Your name is %s",s);
    return 0;
}