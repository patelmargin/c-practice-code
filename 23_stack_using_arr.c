#include<stdio.h>
#include<stdlib.h>

struct stack {
    int top;
    int size;
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
int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    if(isEmpty(s)){
        printf("stack is empty:");
    }
    else{
        printf("stack is not empty:");

    }
   
    return 0;
}