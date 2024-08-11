#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
void display(struct  node *ptr,struct  node *p )
{
    while (ptr != NULL)
    {
        
             printf("the linked list  element  is = %d\n",ptr->data);
             printf("the linked list prev element  is = %d\n",p->data);
             p=p->next;
             ptr = ptr->next;

        
    }
}
void * insertatlast(struct node **first,int data)
    {
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = data;
        ptr->next = NULL;
        if(*first == NULL){
            *first = ptr;
            ptr->prev = NULL;
            return ;
        }
        struct node *p=*first;

        while (p->next != NULL)
        {
            p->next=ptr;
            ptr->prev=p;
        }

    }

int main(){
    struct node * first;
    struct node * second;
    struct node * third;
    struct node * f;
    //allocated memory location
    first=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    f=(struct node*) malloc(sizeof(struct node));
    first->data = 5;
    first->next = second;
    first->prev = NULL;

    second->data = 15;
    second->next = third;
    second->prev = first;


    third->data = 25;
    third->next = f;
    third->prev = second;


     f->data = 35;
    f->next = NULL;
    f->prev = third;
    display(second,first);
    // first = insertatfirst(first,67,2);
    // first = insertatfirst(first,67,2);
    // first = insertatfirst(first,67);
    // printf("after insert:\n");
    first = insertatlast(&first,85);


    display(second,first);
    return 0;
}