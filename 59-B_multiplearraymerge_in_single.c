#include<stdio.h>
void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}

void merge(int a[],int b[],int c[],int m,int n)
{
    int i,j,k;
    i=j=k=0;

    while (i < m && j < n)
    {
        if(a[i] < b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<m){
         c[k]=a[i];
         i++;
         k++;
        
    }
     while(j<n){
         c[k]=b[j];
         j++;
         k++;
        
    }
    for (int i = 0; i < 10; i++)
    {
        a[i]+b[j]=c[k];
    }
    
    

}
void mergeSort(int a[], int low, int high){
    int mid; 
    int b,c;
    if(low<high){
        mid = (low + high) /2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, b, c, m,n);
    }
}

int main()
{
    int a[] = {1,2,117,9,11,17,};
    int b[] = {12,4,6,17,3,};
    int c[] = {};
    int size1 = sizeof(a)/sizeof(int);
    int size2 = sizeof(b)/sizeof(int);
    int size3=size1+size2;
    printarray(a,size1);
    printarray(b,size2);
    merge(a,b,c,size1,size2);
    printarray(c,size3);
    return 0;
}