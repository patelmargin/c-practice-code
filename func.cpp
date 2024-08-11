#include<iostream>
using namespace std;
//function prototype
int sum(int a ,int b);//acceptable
//int sum(int a ,int );// notacceptable
//int sum(int  ,int );//acceptable


int main()
{
int num1,num2;
cout<<"enter the value of number 1:"<<endl;
cin>>num1;
cout<<"enter the value of number 2:"<<endl;
cin>>num2;
cout<<" the sum of two number is = " <<sum(num1,num2)<<endl;



return 0;

}
int sum(int a,int b)
{
    int c = a+b;
    return c;
}