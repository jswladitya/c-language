#include<stdio.h>

int main(){
    // char str[]= "aditya";
    char str[]={'a','d','i','t','y','a','\0'};
    char *ptr = str; //array ki pehli wali element ko point kar raha he 
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}