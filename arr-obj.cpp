#include<iostream>
using namespace std;
class shop{
int id;
float price;

public:
   void setData(int a, int b)
   {
    id = a;
    price = b; 
   }
   void getData(void)
   {
    cout<<"id of given item = "<<id<<endl;
    cout<<"price of given item = "<<price<<endl;
    id++;
    // price++;
   }
};
int main(){
    // shop kirana;
    // kirana.setData(31003,45);
    // kirana.getData();
    int size = 2;
    shop *ptr = new shop [size];
    shop *ptrtemp = ptr;
    int p,q,i;
    for ( i = 0; i < size; i++)
    {
        cout<<"enter the id an price of item"<<i+1<<endl;
         cin>>p>>q;
        //  (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;

    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item number:"<<i+1<<endl;
        ptrtemp->getData();

    }
return 0;
}