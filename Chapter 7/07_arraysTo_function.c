#include<stdio.h>
void printArray(int *ptr ,int n);


int main(){
    int arr[]={24,354,465,67,879,45,5678};
    printArray(arr,7); //if yaha pe size 8 dede jo ki hamare array ka size bhi he toh program kuch bhi garbage value de dega
    return 0;
}

void printArray(int *ptr ,int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
}