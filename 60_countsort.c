#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}
int maximum(int a[],int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max<a[i]){
            max=a[i];
        }

    }
    return max;
    
}
void countsort(int a[],int size)
{
    int i,j;
    int max = maximum(a,size);
    int* count = (int *)malloc((max+1)*sizeof(int));
    //memory allocate for every element 0
    for ( i = 0; i <= max; i++)
    {
        count[i]=0;
    }

    //
    for ( i = 0; i < size; i++)
    {
        count[a[i]]=count[a[i]] + 1;
    }


    i=0;//i counter for a count;
    j=0;// j counter for a array;
    while (i<=max)
    {
        if(count[i]>0){
            a[j]=i;
            count[i]=count[i] - 1;
            j++;

        }
        else
        {
            i++;
        }
    }
    
    
}


int main()
{
    int a[] = {1,2,117,9,111,12,17,};
    int size = sizeof(a)/sizeof(int);
    printarray(a,size);

    countsort(a,size-1);

    printarray(a,size);
    return 0;
}