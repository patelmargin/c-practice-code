#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;

};
struct node * createnode(int data){
    struct node *n;// creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;//set data in n
    n->left=NULL;//setting left element to null
    n->right=NULL;//setting right element to null
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
int isBST(struct node *root){
    static struct node *prev = NULL;//aa tyare j null hase jyare ae pela root par hase
    if(root!=NULL)
    {
          if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);


    }
       
    else
    {
        return 1;
       
    }

}
int main()
{
    //construct the root node
    struct node *p = createnode(25);
    struct node *p1 = createnode(20);
    struct node *p2= createnode(30);
    struct node *p3= createnode(10);
    struct node *p4= createnode(22);
    struct node *p5= createnode(26);
    struct node *p6= createnode(50);
    //tree
//         5
//        / \
//       3   6
//      / \
//     1   4


 //linking the root node  with left and right children

 p->left=p1;
 p->right=p2;
 p1->left=p3;
 p1->right=p4;
 p2->left=p5;
 p2->right=p6;

inorder(p);
printf("\n");
printf("%d\n",isBST(p));
if(!isBST(p)){
    printf("given tree is bst\n");
}
else{
    printf("given tree is not bst\n");


}


    return 0;
}
