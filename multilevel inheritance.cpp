#include<iostream>
using namespace std;
class student{
    protected:
    int rollnumber;
    public:
    void setrollnumber(int);//setrollnumber is take some one to our so it is a int number;
    void getrollnumber(void);//getrollneumber is give our to some one there for it is a void number


};
void student::setrollnumber(int r)
{
rollnumber = r;
}
void student::getrollnumber()
{
cout<<"your rollnumber is = "<<rollnumber<<endl;
}
class exam : public student{
    protected:
    float phy;
    float maths;
    public:
    void setmarks(float,float);
    void getmarks(void);


};
    void exam :: setmarks(float m1,float m2){
        maths=m1;
        phy=m2;

    }
    void exam::getmarks(){
        cout<<"your maths marks are :"<<maths<<endl;
        cout<<"your physics marks are :"<<phy<<endl;
    }

class result:public exam{
    float percentage; 
    public:
    void display(){
        cout<<"your percentage is ="<<(maths+phy)/2<<"%";
    }

};  

int main(){
    result rohan;
    rohan.setrollnumber(18);
    rohan.getrollnumber();
    rohan.setmarks(90,88);
    rohan.getmarks();
    rohan.display();



return 0;
}