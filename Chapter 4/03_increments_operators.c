#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", i++);
    printf("The value of i is %d\n", i);
     
    i+= 10;
    printf("The value of i is %d",i);
     // i+=10 means i=6 heton ab i ki vslue 10 se increment hogi & 16 print hoga
     
    return 0;
    //Sabse pehle toh i=5 print hoga phir i=5+1 mtlb 6 hoga ab i = 6 he toh wo print hoga
    // i++ means pehle print karo phir increment karo
    //++i means pehle increment karo phir print karo
    
}