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
        for (int i = 1; i < 7; i++)
        {
             printf("the linked list %d element  is = %d\n",i,ptr->data);
             ptr = ptr->next;
        }
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
    
    second->data = 15;
    second->next = third;

    third->data = 25;
    third->next = f;

     f->data = 35;
    f->next = NULL;
    display(first);

}