#include <stdio.h>
//Program to find Simple interest
int main()
{
    int principle=3, rate=700, year=2;
    int simpleInterest = (principle * rate * year) /100 ;
    printf("Simple Interest wiil be %d\n", simpleInterest);
    //we have used int variable so we have to use %d
    return 0;
}