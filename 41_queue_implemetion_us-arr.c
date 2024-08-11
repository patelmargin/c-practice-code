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
int first(struct  queue *q)
{
     if(isempty(&q)){
    return 0;
    }
    else{
        return q->arr[q->f-1];
    }
   
}
int last(struct  queue *q)
{
     if(isfull(&q)){
    return q->arr[q->size-1];
    }
    else{
        return q->arr[q->r];
    }
   
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f=q.r=-1;
    q.arr= (int *)malloc(q.size * sizeof(int));
    if(isempty(&q)){
        printf("Queue is an empty!\n");
    }
    else
    {
        printf("Queue is an full!\n");


    }
     

    
    enqueue(&q,12);
    enqueue(&q,22);
    enqueue(&q,32);
    enqueue(&q,42);
    enqueue(&q,52);
    enqueue(&q,62);
    enqueue(&q,72);//not added to the queue,if its size became more than 10;
    dequeue(&q);
    printf("Element %d is dequeued!\n",dequeue(&q));
    first(&q);
    printf("first element of this queue is %d\n",first(&q));
    last(&q);
    printf("last element of this queue is %d\n",last(&q));
     if(isfull(&q)){
        printf("Queue is a full!\n");
    }
    else
    {
        printf("Queue is not full,some space avilable!\n");


    }
    return 0;
}