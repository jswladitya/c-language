#include<stdio.h>
#include<string.h>


int main(){
    char *st = "Aditya";
    char st2[34];
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);
    return 0;
}