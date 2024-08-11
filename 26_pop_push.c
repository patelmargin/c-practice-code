#include<stdio.h>
#include<stdlib.h>
struct stack {
    int top;
    int size;
    int * arr;

};
int isEmpty(struct stack* ptr){
    if(ptr->top == -1)
{
    return 1;
}
else{
    return 0;
}

}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1)
{
    return 1;
}
else{
    return 0;
}

}
void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("stack is overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf(" pushed element %d\n",val);

        

    }
}
int pop(struct stack  *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("poped element %d\n",val);
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack created successfully!\n");

    printf("%d\n",isFull(sp));
    printf("%d\n",isEmpty(sp));
    push(sp,07);
    push(sp,97);
    push(sp,87);
    push(sp,77);
    push(sp,77); // stack is overflow there for this element not add to the stack;
    // pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);


    printf("%d\n",isFull(sp));
    printf("%d\n",isEmpty(sp));
    return 0;
}