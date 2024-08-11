#include<stdio.h>
void printarray(int *a, int size){
for (int i = 0; i < size; i++)
{
        printf("%d ",a[i]);
}
printf("\n");

}
void bublesort(int *a,int size){
    int temp;
    for (int i = 0; i < size-1 ; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        }
        
    }
    
void bublesortadaptive(int *a,int size){
    int temp;
    int issorted = 0;
    for (int i = 0; i < size-1 ; i++)
    {
        printf("working on pass number %d\n",i+1);
         issorted = 1;
        for (int j = 0; j < size-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issorted = 0;
            }
        }
        if(issorted){
            return 0;
        }
        
    }
    
}

int main ()
{
    int a[] = {18,9,17};
    // int a[] = {1,2,117,9,111,12,17,};
    int size = sizeof(a)/sizeof(int);
    printarray(a,size);
    bublesortadaptive(a,size);
    printarray(a,size);
    bublesort(a,size);
    printarray(a,size);

    return 0;
}