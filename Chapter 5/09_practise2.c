//Q2 --> do it own
//Q3 ---> write a function to calculate force of attraction an a body of mass m exerted by earth

#include<stdio.h>
float force(float mass);

int main(){
    int m;
    printf("enter the value of mass in kg\n");
   scanf("%f",&m);
    printf("The value of force in Newton is %f\n",force(m));
    //%.2f means 2 decimal tak print karo

    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}