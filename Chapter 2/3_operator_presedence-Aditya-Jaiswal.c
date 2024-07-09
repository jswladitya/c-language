#include<stdio.h>

int main(){
    int x = 4;
    int y = 9;

    // printf("The value of 3*x - 8*y is %d", 3*x  - 8*y);

    //When multiplication and division occurs together then left to right associativity applies
    //BODMAS not applied

    // printf("The value of 8*y / 3*x is %d ", 8*y / 3*x); //16
    //Here 8*3 / 3*2 = 24/6 is wrong
    // 24/3*2 coz left to right jata he
    // 8*2 
    // 16
    //lly, if we put the brackets then satisfactory result will be obtain

     printf("The value of (8*y) / (3*x) is %d ", (8*y) / (3*x));
    return 0;
}