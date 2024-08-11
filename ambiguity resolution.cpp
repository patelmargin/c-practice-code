#include<iostream>
using namespace std;
class base1{
    public:
    void greet()
    {
        cout<<"how are you ?"<<endl;
    }

};
class base2{
    public:
    void greet()
    {
        cout<<"kem cho badha majama?"<<endl;
    }

};
class derived :public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();
    }
};
// class m{
//     public:
//     void say()
//     {
//         cout<<"hello margin patel"<<endl;
//     }
// };
// class j:public m{
//     public:
//     void say()
//     {
//         cout<<"hello jay patel"<<endl;
//     }
// };
int main(){
    // ambiguity 1;
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();//here ambiguty is not disolving on its own beacuse there are two class so compiler are confuse ,which function run;
    derived d;
    d.greet();

//ambiguity 2;
// m margin;
// margin.say();
// j jay;
// jay.say();//here ambiguity is disoving on its own;



return 0;
}