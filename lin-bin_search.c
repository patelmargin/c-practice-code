#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}
int binarysearch(int arr[],int size,int element)
{
    int l,m,h;
    while (l<=h)
    {
    m=(l+h)/2;
    if(arr[m]==element){
        return m;
    }
    if(arr[m]<element){
        l=m+1;

    }
    else{
        h=m-1;
    }
}
return -1;
}
int main(){
    //LINEARSEARCH USE FOR UNSORTED ARRAY
    // int arr[] = {1,4,2,6,3,4,6544,3,4};
    // int size = sizeof(arr)/sizeof(int);
    // int element;
    // printf("enter element which you find into the array:");
    // scanf("%d",&element);
    // int searchindex = linearsearch(arr,size,element);
    // printf("the ele %d was found at %d ",element,searchindex);


    //BINARYSEARCH USE FOR SORTED ARRAY
     int arr[] = {1,4,12,16,23,24,56,58,78};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("enter element which you find into the array:");
    scanf("%d",&element);
    int searchindex = binarysearch(arr,size,element);
    printf("the ele %d was found at %d ",element,searchindex);

    return 0;
}