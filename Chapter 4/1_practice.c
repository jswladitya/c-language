#include<stdio.h>
//Multiplication table
int main(){
    int i , n ;
    printf("MULTIPLICATION TABLE\n");
    scanf("%d", &n);
    for( i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d\n", n, i , n*i);
    }
    
    return 0;
}