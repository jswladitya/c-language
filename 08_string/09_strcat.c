#include<stdio.h>
#include<string.h>

int main(){
    char st1[34] = "aditya";
    char *st2 = " jaiswal";
    strcat(st1,st2); //add st2 to st1
    printf("Now the st1 is %s", st1);
    return 0;
}