#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    printf("Initiatizing Function\n");
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning\n");
    goodAfternoon();
}
void goodAfternoon(){
    printf("Good Afternoon\n");
    goodNight();
}
void goodNight(){
    printf("Good Night\n");
}