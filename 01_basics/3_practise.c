#include <stdio.h>
// program to convert celsius to faranhiet
int main()
{
   float celsius = 37, far;
   far = (celsius * 9 / 5 ) + 32 ;

   printf("The value in faranheit is %f", far);
   return 0;
}