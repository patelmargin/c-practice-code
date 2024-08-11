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
//these two characters are the same. If they are the same, return 1, else 0.

int match(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
  return 0;  
}

int parenthesisMatch(char * exp){
    // Create and initialize the stack
   
   
    
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;
 
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            if(isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch, exp[i])){ 
              return 0;  
            }
        }
    }
 
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char * exp = "[a+b(c*v)f/b}]" ;
    
    if(parenthesisMatch(exp))
    {
        printf("Expression is balanced!");
    }
    else{
        printf("Expression is not balanced!");
    }
    
   
    return 0;
}