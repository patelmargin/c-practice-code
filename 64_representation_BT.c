#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node * child1;
    struct node * child2;
};
void display(struct  node *ptr,struct  node *p )
{
    while (ptr != NULL)
    {
        
             printf("first child  is = %d\n",ptr->data);
             printf("second child  is = %d\n",p->data);
             p=p->child1;
             ptr = ptr->child1;

        
    }
}

void postorder(struct node *root){
    if(root!=NULL)
    {
        postorder((root->child1));//left
        postorder((root->child2));//right
        printf("%d ",root->data);//root


    }

}


void preorder(struct node *root){
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder((root->child1));
        preorder((root->child2));

    }

}
void inorder(struct node *root){
    if(root!=NULL)
    {
        inorder((root->child1));
        printf("%d ",root->data);
        inorder((root->child2));

    }

}

    struct node * createnode(int data){
    struct node *n;// creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;//set data in n
    n->child1=NULL;//setting left element to null
    n->child2=NULL;//setting right element to null
    return n;

}

int main(){
//     struct node * p;
//     struct node * p1;
//     struct node * p2;
//     struct node * four;
//     struct node * five;
//     struct node * six;
//     struct node * seven;
//     //allocated memory location
//     p=(struct node*) malloc(sizeof(struct node));
//     p->data = 5;
//     p->child1 = NULL;
//     p->child2 = NULL;

//     p1=(struct node*) malloc(sizeof(struct node));
//     p1->data = 3;
//     p1->child1 = NULL;
//     p1->child2 = NULL;

//     p2=(struct node*) malloc(sizeof(struct node));
    
//     p2->data = 11;
//     p2->child1 = NULL;
//     p2->child2 = NULL;

//      p->child1 = p1;
//     p->child2 = p2;

//other type to represent tree node

struct node *p = createnode(5);
struct node *p1 = createnode(3);
struct node *p2= createnode(11);
struct node *p3= createnode(2);
struct node *p4= createnode(4);
struct node *p5= createnode(10);
struct node *p6= createnode(13);
    p->child1 = p1;
    p->child2 = p2;
    p1->child1 = p3;
    p1->child2 = p4;
    p2->child1 = p5;
    p2->child2 = p6;

    printf("postoder declaration!\n");
    postorder(p);
    printf("\n");


    printf("preoder declaration!\n");
    preorder(p);
    printf("\n");

    printf("inoder declaration!\n");
    inorder(p);
    printf("\n");


   

  






    return 0;
}