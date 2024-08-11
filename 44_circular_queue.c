#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size;
    int r;
    int f;
    int *arr;
};

int isempty(struct circularqueue *q){
    if(q->r == q->f){
        return 1;

    }
    else
    {
        return 0;
    }
}
int isfull(struct circularqueue *q){
    if((q->r+1)%(q->size) == q->f){
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct circularqueue *q,int val){
    if(isfull(q)){
        printf("Queue is full,so element not added!\n");
        

    }
    else{
        q->r = (q->r+1)%(q->size);
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);


    }

}
int dequeue(struct circularqueue *q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is empty,so element not delete!\n");


    }
    else{
        q->f = (q->f+1)%(q->size);
        a = q->arr[q->f];

    }
    return a;

}
int first(struct  circularqueue *q)
{
     if(isempty(&q)){
    return 0;
    }
    else{
        return q->arr[q->f];
    }
   
}
int last(struct  circularqueue *q)
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
    struct circularqueue q;
    q.size = 4;
    q.f=q.r=0;
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
    enqueue(&q,62);
    enqueue(&q,72);//not added to the queue,if its size became more than 10;
        first(&q);
    printf("first element of this queue is %d\n",first(&q));
    last(&q);
    printf("last element of this queue is %d\n",last(&q));
    printf("Element %d is dequeued!\n",dequeue(&q));
    printf("Element %d is dequeued!\n",dequeue(&q));
    printf("Element %d is dequeued!\n",dequeue(&q));
    enqueue(&q,6);
    enqueue(&q,16);
    enqueue(&q,61);

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