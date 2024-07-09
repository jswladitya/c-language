#include<stdio.h>

int main(){
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        // 0 to 9 print hoga 
       if(i==4){
        break;
        //ab 0 to 4 hi print hoga
       }
       i++;
    } while (i<10);
    
    return 0;
}