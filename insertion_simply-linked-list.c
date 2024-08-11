#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void display(struct  node *ptr)
{
    while (ptr != NULL)
    {
            
             printf("the linked list element  is = %d\n",ptr->data);
             ptr = ptr->next;
        
    }

}
// struct node * insertatfirst(struct node * first,int data)
//     {
//         struct node * ptr = (struct node *)malloc(sizeof(struct node));
//         ptr->data = data;

//         ptr->next = first;
//         return ptr;

//     }
struct node * insertatlast(struct node * first,int data)
    {
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = data;

        ptr->next = NULL;
        return ptr;

    }
struct node * insertatfirst(struct node * first,int data,int index)
    {
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        

        struct node * p = first;
        int i=0;
        while (i!=index-1)
        {
            p=p->next;
            i++;
            
        }
        ptr->next=p->next;// _  _ -  _  _  _
        p->next=ptr;
        
    }

int main()
{
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
    second->data = 15;
    second->next = third;

    third->data = 25;
    third->next = f;

     f->data = 35;
    f->next = NULL;
    display(first);
    first = insertatfirst(first,67,3);
    // first = insertatfirst(first,67);
    // first = insertatlast(first,67);
    printf("after insert:\n");

    display(first);
    return 0 ;
    


}