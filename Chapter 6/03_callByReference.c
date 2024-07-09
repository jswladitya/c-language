// Call by referece -->  ham yaha function ko call karte he by passing the address
//because mere address se mer tak paucha ja sakta he but mere naam se nhi 
// swapping 2 numbers using call by reference ,NOTE: call by value will not work

#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("The value of x & y before swap is %d and %d\n", x, y);
    // wrong_swap(x,y);// will not work due to call by value

    swap(&x, &y); // will work due to call by reference, yaha address dia jata he jaha value stored he
    printf("The value of x & y after swap is %d and %d\n", x, y);
    return 0;
}

// void wrong_swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

void swap(int *a, int *b)
{ // since a ek address he, toh ek address ke value ko prapt karne ke lie * lagate he ,temp ka type int he is;ie temp me nhi lagaunga *
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}  