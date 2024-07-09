#include <stdio.h>
//NOTE: int,float 4 byts ka memory leta he ,char 1 byte ka memory leta he
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr); //address
    ptr++;
    printf("The value of ptr is %u\n", ptr);//address+4

    return 0;
} 