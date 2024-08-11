#include<iostream>
using namespace std;
class student{//here strudent to test and sport class are make so here hierarchical inheritance are applied. 
    protected:
    int rollnumber;
    public:
    void setnumber(int a){
        rollnumber = a;
    }
    void printnumber(void){
        cout<<"your roll number is "<<rollnumber<<endl;
        cout<<endl;
    }

};
class test: virtual public  student{
    protected:
    float maths,chemistry;
    public:
    void setmarks(float m,float c){
        maths=m;
        chemistry=c;
    }
    void display_marks(void){
        cout<<"your result :"<<endl;
        cout<<"your maths marks "<<maths<<endl;
        cout<<"your chemistry marks "<<chemistry<<endl;

    }

};
class sport: public virtual student{
    protected:
    float sport_sub;
    public:
    void setscore( float sc){
        sport_sub=sc;
    }
    void printscore(void){
        cout<<"your sport marks  is "<<sport_sub<<endl;   
        cout<<endl;

        
         }


};
class result:public test,public sport{//here result is multiple inheritance beacuse it make from test and sport class .

    private:
    float total;
    public:
    void display(void){
        total=maths+chemistry+sport_sub;
        printnumber();
        display_marks();
        printscore();
        cout<<"your total score is : "<<total<<endl;

    }

};

int main()
{
    result margin;
    margin.setnumber(18);
    margin.setmarks(97.4,88.8);
    margin.setscore(8);
    margin.display();


return 0;
}