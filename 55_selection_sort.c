#include<stdio.h>
#include<stdlib.h>
void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}
void selectionsort(int *a,int size){
    int key,temp;
    for (int i = 0; i < size-1 ; i++)
    {
        key=i;
        for (int j = i+1; j < size; j++)
        {
             if(a[j] < a[key]){
                key=j;


        }
      
        }
        temp=a[i];
        a[i]=a[key];
        a[key]=temp;
    }
}

int main()
{
    int a[] = {3,2,117,9,111,12,17,};
    int size = sizeof(a)/sizeof(int);
    printarray(a,size);
    selectionsort(a,size);
    printf("'after using selection sort method array sorting like below condition!'\n");
    printarray(a,size);
    return 0;
}