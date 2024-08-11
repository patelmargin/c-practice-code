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
        
             printf("the linked list  element  is = %d\n",ptr->data);
             ptr = ptr->next;
        
    }
}
// struct node *deletell(struct node *first)
// {
//     struct node *ptr=first;
//     first = first->next;
//     free(ptr);
//     return first;

   

// }
// struct node *deletell(struct node *first,int index)
// {
//     struct node *p=first;
//     struct node *q=first->next;
//     for (int i = 0; i < index-1; i++)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
    
//     return first;

   

// }
struct node *deletelast(struct node *first)
{
    struct node *p=first;
    struct node *q=first->next;
    while (q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    
    p->next=NULL;
    free(q);
    
    return first;

   

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
    
    second->data = 15;
    second->next = third;

    third->data = 25;
    third->next = f;

     f->data = 35;
    f->next = NULL;
    int index;
    // printf("enter index for delete :");
    // scanf("%d",&index);

    // printf("before delete element:\n");
    // display(first);

    // first = deletell(first,index);
    // printf("after delete element:\n");
    // display(first);

    // first = deletell(first);

    
    printf("before delete element:\n");


    display(first);
    
    first = deletelast(first);
    printf("after delete element:\n");

    display(first);



}