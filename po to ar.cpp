#include<iostream>
using namespace std;
int main()
{
int marks[]={23,35,38,26,21};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
for (int i = 0; i < 5; i++)
cout<<"the value of marks " <<i<< " is "<<marks[i]<<endl;
int *p = marks,i;
for (int i = 0; i < 5; i++)

cout<<"the address of marks["<<i<<"] is "<<(p++)<<endl;
// cout<<"the address of marks["<<i<<"] is "<<(p+1)<<endl;
// cout<<"the address of marks["<<i<<"] is "<<(p+2)<<endl;
// cout<<"the address of marks["<<i<<"] is "<<(p+3)<<endl;
// cout<<"the address of marks["<<i<<"] is "<<(p+4)<<endl;



return 0;
}