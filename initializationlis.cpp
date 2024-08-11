#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    //  test(int i,int j):a(i),b(i+j)
    //  test(int i,int j):a(i),b(a*j)

     test(int i,int j):b(j),a(i+j)//its though garbase value beacuse here first a inisilization
     {
        cout<<"constructor execute:"<<endl;
        cout<<"value of a is ="<<a<<endl;
        cout<<"value of b is ="<<b<<endl;
    }
};
int main(){
    test t(4,9);


return 0;
}