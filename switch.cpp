#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    //selection control structurev:switch case
    switch (age)
    
    {
    case 18:
        /* code */
        cout<<"you are a young,so you can drive car"<<endl;
        break;
    case 16:
        /* code */
        cout<<"you are a child,so you cant drive car"<<endl;
        break;
    case 22:
        /* code */
        cout<<"you are a 22, your time for marrige "<<endl;
        break;
    case 98:
        /* code */
        cout<<"you are a old,so you cant capaable to drive car"<<endl;
        break;
    
    default:
    cout<<"no specil case are execute"<<endl;
        break;
    }
    
    return 0;

}