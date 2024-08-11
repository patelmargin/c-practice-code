#include<iostream>
using namespace std;
class jaganexim{
protected:
    string title;
    float rating;
public:
    jaganexim(string s,float r){
        title = s;
        rating = r;
}
 virtual void dsiplay()=0;//pure virtual function

 //it is used to make abstract base class 

};

class jaganex: public jaganexim
{
    int export1;
    public:
    jaganex(string s,float r,int ex ):jaganexim(s,r){
        export1 =ex;
    }
    void dsiplay(){
        cout<<"this is amazing title of export is "<<title<<endl;
        cout<<"rating:"<<rating<<" out of 5 star"<<endl;
        cout<<"jagan  are export item in lakh = "<<export1<<endl;

    }

};

class jaganim: public jaganexim
{
    int import1;
    public:
    jaganim(string s,float r,int im):jaganexim(s,r){
        import1 =im;
        }
    void dsiplay(){

        cout<<"this is amazing title of import is "<<title<<endl;
        cout<<"rating:"<<rating<<" out of five star "<<endl;
        cout<<"jagan are import item in lakh = "<<import1<<endl;
    }
    
};
int main()
{
    string title ;
    float rating ;
    int import1,export1;

    //for jagan export
    title =" jagan export private ltd :";
    export1 = 6;
    rating = 4.9;

    jaganex exportitem(title,rating,export1);
    exportitem.dsiplay();


    title =" jagan import private ltd :";
    import1 = 30;
    rating = 5;

    jaganim importitem(title,rating,import1);
    importitem.dsiplay();

    // jaganexim * tut[2];
    // tut[0]= &exportitem;
    // tut[1]=&importitem;

    // tut[0]->dsiplay();
    // tut[1]->dsiplay();





return 0;
}