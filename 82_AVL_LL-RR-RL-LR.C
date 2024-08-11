#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
    int height;

};
int getheight(struct node *n){
    if(n == NULL){
        return 0;

    }
    else
    {
        return n->height;
    }
}
struct node * createnode(int data){
    struct node *n;// creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;//set data in n
    n->left=NULL;//setting left element to null
    n->right=NULL;//setting right element to null
    return n;

}
int balancefator(struct node *n){
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return getheight(n->left) - getheight(n->right);
    }
    
}
int max(int a,int b){
     return a>b?a:b;
}
struct node *rightrotate(struct node *y){
    struct node * x = y->left;
    struct node * t2 = x->right;

    x->right=y;
    y->left=t2;

    x->height= max(getheight(y->right), getheight(y->left));
    y->height= max(getheight(x->right), getheight(x->left));
    return x;

}
struct node *leftrotate(struct node *x){
    struct node * y = x->right;
    struct node * t2 = y->left;

    y->left= x;
    x->right=t2;

    x->height= max(getheight(y->right), getheight(y->left));
    y->height= max(getheight(x->right), getheight(x->left));

    return y;

}
struct node * insert(struct node * n,int key){
    if(n==NULL)
        return (createnode(key));
    
    if (key <n->data)
    n->left = insert( n->left,key);
    else if (key > n->data)
    n->right = insert( n->right,key);
    return n;

    n->height= 1 + max(getheight(n->left),getheight(n->right));
    int bf = balancefator(n);
//left left rotate
    if(bf>1 && key < n->left->data){
        rightrotate(n);
    }
//right right rotate
 if(bf<-1 && key > n->right->data){
        leftrotate(n);
    }
//left right rotate
if(bf>1 && key > n->left->data){
    n->left = leftrotate(n->left);
        rightrotate(n);
    }
//right left rotate
if(bf<-1 && key < n->right->data){
      n->right = rightrotate(n->right);
        leftrotate(n);
    }
    return n;

        
}


 

void inorder(struct node *root){
    if(root!=NULL)
    {
        inorder((root->left));
        printf("%d ",root->data);
        inorder((root->right));

    }

}
void postorder(struct node *root){
    if(root!=NULL)
    {
        postorder((root->left));//left
        postorder((root->right));///right
        printf("%d ",root->data);//root


    }

}


                   


int main()
{
    struct node *root = NULL;
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,56);
    root = insert(root,64);
    root = insert(root,51);
    inorder(root);
    printf("\n");
    inorder(root);


    return 0;
}