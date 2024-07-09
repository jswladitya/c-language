#include<stdio.h>
void printPattern(int n);

int main(){
    int n =3;
    printPattern(n);
    return 0;
}

//for n = 3
//* ---> means 1 line ke lie 1* chahiye
//*** ---> means 2nd line ke lie 3* chahiye
//***** --->means 3rd line ke lie 5* chahiye
//means (2n-1)
void printPattern(int n){
     if (n==1){
        printf("*\n");
        return;
     }
     printPattern(n-1);
     for(int i = 0; i<(2*n - 1); i++){
        printf("*");
     }
     printf("\n");
}