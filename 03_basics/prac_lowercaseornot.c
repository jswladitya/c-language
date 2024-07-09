#include<stdio.h>

int main(){
    //97 - 122 = a - z ---> ASCII values
    char ch;
    printf("Enter the characters\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf(" %c is a lower case",ch);
    }
    else{
        printf(" %c is a not lower case",ch);
    }
    return 0;
}