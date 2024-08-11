#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int *p=&a;
    int **pp = &p;
    cout<<"the add of an a is = "<<&a<<endl;
    cout<<"the add of an a is = "<<p<<endl;
    cout<<"the value of an a is = "<<*p<<endl;
    cout<<"the value of an a is = "<<**pp<<endl;
    cout<<"the value of an a is = "<<a<<endl;
    cout<<"the add of an p is = "<<&p<<endl;
    cout<<"the add of an p is = "<<pp<<endl;
    cout<<"the add of an pp is = "<<&pp<<endl;
    return 0;



}
