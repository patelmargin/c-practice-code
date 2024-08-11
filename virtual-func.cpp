#include<iostream>
using namespace std;
class bClass{
    public:
    int var_base;
     virtual void display(){
        cout<<"1 dispaling base class variable is var_base = "<<var_base<<endl;
    }

};
class dClass : public bClass{
        public:
            int var_derived;
             void display(){
            cout<<"2 dispaling derived class variable is var_derived = "<<var_derived<<endl;
            cout<<"2 dispaling base class variable is var_base = "<<var_base<<endl;
            }
};
int main()
{
    bClass * basepointer;
    bClass object_b;
    dClass object_d;
    basepointer = &object_b;
    basepointer = &object_d;
    basepointer->var_base=45;
    basepointer->display();//(*basepointer).display();

return 0;
}
// VIRTUAL in c++ is member function of base class which its derived classes can  modify or overide.