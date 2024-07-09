#include<stdio.h>
//Sum is a funcion which takes a and b as input and returns an integer as an output
int sum(int a , int b); // function prototype

int main(){
    int c;
    c = sum(2 , 5); //function call
    //since int he so wo int return karega toh hame function ka result store karana padega 
    printf("The value of a + b : %d",c);
    return 0;
}

int sum (int a , int b){
    int result ;
    result = a + b ;
    return result;
}


// NOTE:why int main(), return  
//  int likha he toh ham return likhte he & ye int value return karega & return 0 ham likhte he taki operating system ko pata chale ki successfully program execute ho chuka he