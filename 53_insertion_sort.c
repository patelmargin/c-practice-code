#include<stdio.h>
#include<stdlib.h>
void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}
void insertionsort(int *a,int size){
    int key,j;
    for (int i = 1; i <= size-1 ; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]= a[j];
            j--;
        }
        a[j+1] = key;

    }
}

int main()
{
    int a[] = {1,2,117,9,111,12,17,};
    int size = sizeof(a)/sizeof(int);
    printarray(a,size);
    insertionsort(a,size);
    printf("'after using insertion sort method array sorting like below condition!'\n");
    printarray(a,size);
    return 0;
}