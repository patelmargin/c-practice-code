#include<stdalign.h>
#include<stdlib.h>
#include<string.h>
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
int stackTop(struct stack *sp){
    printf("top element is %d:\n",sp->arr[sp->size-1]);

}
int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
char* infixToPostfix(char* infix){
    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10; 
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0; // Track infix traversal
    int j = 0; // Track postfix addition 
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))    
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}



int main()
{
    char * infix ="a+v*3+g";
    printf("postfix is %s",infixToPostfix(infix)); 
   
    return 0;
}