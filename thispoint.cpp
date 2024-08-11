#include<iostream>
using namespace std;
class A
{
    int b;
    public:
    void setData(int b){
        this->b = b;
    }
    void getData(){
        cout<<"the value of an a is = "<<b<<endl;
    }
};
int main(){
A a;
a.setData(5);
a.getData();
return 0;
}
// THIS POINTER is a pointer accessible only within the nonstatic member function of class,struc or union type.
// it is used to access object variable when local variable with the same name is present in the function.