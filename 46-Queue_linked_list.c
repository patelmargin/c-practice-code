#include<stdio.h>
#include<stdlib.h>
    struct  node *f = NULL;
    struct  node *r = NULL;
 struct node 
 {
    int data;
    struct node * next;
 };
 void display(struct  node *ptr)
{
    printf("printing the element of the linked list!\n");
    while (ptr != NULL)
    {
            
             printf("the linked list element  is = %d\n",ptr->data);
             ptr = ptr->next;
        
    }

}
 void enqueue(int val)
 {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        printf("queue is full:");
    }    
    else
    {
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
        r->next=n;
        r=n;

        }
    }
 }
 int dequeue(struct node *f ){
    int val=-1;
    struct node *ptr;
     if(f==NULL){
        printf("queue is empty:\n");
    }    
    else
    {
        f=f->next;
        val = ptr->data;
        free(ptr);

        }
        return val;
 }
 int main()
 {
    enqueue(87);

    enqueue(7);
    enqueue(8);
    printf("%d is dequeue from queue!\n",dequeue(&f));


    display(f);

    
    return 0;
 }
 
