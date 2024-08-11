#include<iostream>
using namespace std;//we can use constructor in derived class
class base1{
    int data1;
    public:
    base1(int i){
    data1=i;
    cout<<"base 1 class constructor are run"<<endl;



    }
    void printdata1(void){
        cout<<" the data of base1 class is "<<data1<<endl;
    }

};
class base2{
    int data2;
    public:
    base2(int i){
    data2=i;
    cout<<"base 2 class constructor are run"<<endl;



    }
    void printdata2(void){
        cout<<" the data of base2 class is "<<data2<<endl;
    }

};
class derived : public base2 ,public base1{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base2(b),base1(a){
        derived1=c;
        derived2=d;
        cout<<"derived class constructor are run "<<endl;

    }
    void printdata(void){
        cout<<" the derived1 of this class is "<<derived1<<endl;
        cout<<" the derived2 of this class is "<<derived2<<endl;
    }


};
int main()
{

    derived margin(1,2,3,4);
    margin.printdata1();
    margin.printdata2();
    margin.printdata();

return 0;
}