// Q1 -->  = ka sign he == nhi ,toh I am 11 print hoga

// Q2
#include <stdio.h>
int main()
{

    int physics, maths, chemistry;
    float total;
    printf("Enter marks of Physics\n");
    scanf("%d", &physics);

    printf("Enter marks of Maths\n");
    scanf("%d", &maths);

    printf("Enter marks of Chemistry\n");
    scanf("%d", &chemistry);
    total = (physics + maths + chemistry)/3 ;

    if((total < 40) || physics < 33 || maths < 33 || chemistry < 33){
        printf("Your total percentage is %f and you failed\n",total);
    }
     else{
        printf("Your total percentage is %f and you passed\n",total);
     }

    return 0;
}