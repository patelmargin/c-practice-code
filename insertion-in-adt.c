#include<stdio.h>
#include<stdlib.h>
int i;
      //traversal
void display( int arr[],int size){
    for ( i = 0; i <= size + 1; i++)
    {
        printf("  %d ",arr[i]);

    }
    printf("\n");
    
}
    // insert element

void insertion(int arr[],int size, int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    

      for (int i = size-1; i >=index ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element; //aapde j element ne j index par nakhva iciae tya nakhi sakishu aa parthi
    return 1;
    
    
}

//deleting element to the array
void deletion(int arr[],int size,int index){

      for (int i =index; i<size ; i++)
    {
        arr[i] = arr[i+1];
    }
   
    
}

int main(){
    int arr[100]={1,2,3,6,8};
    int size = 6;
    int element,index ;
    printf("enter any element for insert :");
    scanf("%d",&element);
    printf("enter any index where  you need to insert element :");
    scanf("%d",&index);
    insertion(arr,size,element,100,index);
    display(arr,size);
    size +=1;


    // printf("enter any index where  you need to delete element :");
    // scanf("%d",&index);
    // display(arr,size);
    // deletion(arr,size,index);
    // size -=1;

    // display(arr,size);

   
    return 0;
}