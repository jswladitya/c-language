#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; // this is a interger pointer , to allocate memory dynamically
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow| cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow| cannot pop %d to the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); // structure pointer ek structure ke address ko store karega
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created successfully");

    printf("before push : Empty %d\n", isEmpty(sp)); // true 1
    printf("before push : full  %d\n", isFull(sp));  // false 0

    push(sp, 56);
    push(sp, 45);
    push(sp, 46);
    push(sp, 32);
    push(sp, 76);
    push(sp, 87);
    push(sp, 98);
    push(sp, 90);
    push(sp, 54);
    push(sp, 43); //lifo
    printf("after push : Empty %d\n", isFull(sp));
    printf("after push : full %d\n", isFull(sp));

    // pop
    printf("popped %d from the stack \n", pop(sp));

    return 0;
}