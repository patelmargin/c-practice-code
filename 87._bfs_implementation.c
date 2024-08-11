#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int r;
    int f;
    int *arr;
};

int isempty(struct queue *q){
    if(q->r == q->f){
        return 1;

    }
    else
    {
        return 0;
    }
}
int isfull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("Queue is full,so element not added!\n");
        

    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);


    }

}
int dequeue(struct queue *q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is empty,so element not delete!\n");


    }
    else{
        q->f++;
        a = q->arr[q->f-1];

    }
    return a;

}

int main()
{
    struct queue q;
    q.size = 400;
    q.f=q.r=0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    //bfs implemantation
    int u;
    int i=1;
    int visited[7]={0,0,0,0,0,0,0};
    int a [7][7] = 
    {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}

    };

    printf("%d\n",i);
    visited[i]=1;
    enqueue(&q,i);//Enqueue i for exploringh


    while(isempty(&q))
    {
        int u = dequeue(&q);
        for (int j = 1; j <= 7; j++)
        {
            if(a [u][j] ==1 && !visited[j]){
                printf("%d",j);
                visited[j] =1;
                enqueue(&q,j);
            }
        }
    }
    return 0;
}