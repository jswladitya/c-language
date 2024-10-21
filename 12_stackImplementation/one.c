#include<stdio.h>
//implementation of stack using array

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int)); //interger store kar rahe he stack me islie sizeof(int) likha he

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int)); //interger store kar rahe he stack me islie sizeof(int) likha he

    //check if stack is empty
    if (isEmpty(s))
    {
        printf("the stack is empty");
    } else{
        printf("the stack is not empty");
    }
    


    return 0;
}