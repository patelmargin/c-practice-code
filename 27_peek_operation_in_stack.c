#include<stdalign.h>
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
int push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("stack is overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        

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
        return val;
    }
}
int stacktop(struct stack *sp){
    printf("top element is %d:\n",sp->arr[sp->size-1]);

}
int stackbottom(struct stack *sp){
    printf("bottom element is %d:\n",sp->arr[0]);

}
int peek(struct  stack* sp,int i)
{
    if(sp->top-i+1<0){
        printf("not valid positon!\n");
    }
    else{
        return sp->arr[sp->top-i+1];
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
    push(sp,17);
    push(sp,27);
    push(sp,37);
    push(sp,3);
    push(sp,07);
    push(sp,2);
    push(sp,37);
    push(sp,47); //first out last in
    push(sp,57);
    // stack is overflow there for this element not add to the stack; is element is more than 10
    printf("element %d  poped from the stack\n",pop(sp));
    printf("element %d  poped from the stack\n",pop(sp));
    printf("element %d  poped from the stack\n",pop(sp));


    printf("%d\n",isFull(sp));
    printf("%d\n",isEmpty(sp));

    for (int j = 1; j <= sp->top+1; j++)
    {
        printf("the value at index %d is %d\n",j,peek(sp,j));
    }

    stacktop(sp);
    stackbottom(sp);
    
    return 0;
}