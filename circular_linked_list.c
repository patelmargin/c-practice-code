#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
//travelsal
void circular(struct node *first){
    struct node *ptr=first;
    do
    {
        printf("%d elemnet is\n",ptr->data);
        ptr=ptr->next;
    } while (ptr->next != first);
}
    


//insertion at first element
struct node * insertelement(struct node *first,int data){

    struct node *ptr=(struct node *) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=first->next;
    while (p->next != first)
    {
        p=p->next;
    }
        p->next=ptr;
        ptr->next=first;
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
    f->next = first;


    // circular(first);
    first = insertelement(first,80);
    circular(first);
    printf("\n");
    first = insertelement(first,76);
    circular(first);
    printf("\n");


     first = insertelement(first,80);
    circular(first);
    printf("\n");

    return 0;
}