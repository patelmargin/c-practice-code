#include<iostream>
using namespace std;
union product
{
    int rice;
    char aekam;
    float ricecontity;
};


int main(){
     product agri;
    agri.rice = 5;
    agri.aekam = 'k';//outpu:k and 107 beacuse in union data type at the same time only one value you can use not more;
    cout<<agri.aekam<<endl;
    cout<<agri.rice<<endl;

return 0;
}