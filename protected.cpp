#include<iostream>
using namespace std;
class base{
    private:
    int a;
    protected:
    int b;
};
class derived : protected base{


};
int main(){
    base b;
    derived d;
    // cout<<d.a; will not work beacuse a is protected


return 0;
}