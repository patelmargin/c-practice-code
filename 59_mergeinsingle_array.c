#include<stdio.h>
void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}

void merge(int a[],int mid,int low,int high)
{
    int i,j,k,b[100];
    i=low;
    j=mid+1;
    k=low;

    while (i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
         b[k]=a[i];
         i++;
         k++;
        
    }
     while(j<=high){
         b[k]=a[j];
         j++;
         k++;
        
    }
    for (int i =low; i <= high; i++)
    {
        a[i]=b[i];
    }
    
    

}
void mergeSort(int a[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, mid, low, high);
    }
}

int main()
{
    int a[] = {1,2,117,9,111,12,17,};
    int size = sizeof(a)/sizeof(int);
    printarray(a,size);
    mergeSort(a,0,size-1);

    printarray(a,size);
    return 0;
}