#include<iostream>
#include<list>

using namespace std;
void display(  list<int> &l ){
    list <int>::iterator iter;
        for (iter = l.begin(); iter!= l.end(); iter++)
    {
    cout<<(*iter)<<" ";
        
    }
    cout<<endl;
}
int main(){
    list<int> list1;// 0 length list
    list1.push_back(5);  
    list1.push_back(7);  
    list1.push_back(7);  
    list1.push_back(1); 
    // iter= list1.begin();
    display(list1);
    //remove element;
    // list1.pop_back();//popback is used to remove an element from last;
    // list1.pop_front();//popfront is used to remove an element from start;
    // list1.remove(7);//remove is used to remove an element,which you detected in bracket;
    //sorting an element;
    list1.sort();
    display(list1);


    list<int> list2(5);//empty list with 5 length;
    list <int>::iterator iter;
    iter=list2.begin();
    *iter = 12;
    iter++;
    *iter = 14;
    iter++;
    *iter = 11;
    iter++;
    *iter = 109;
    iter++;
    *iter = 18;
    iter++;
    display(list2);
    //sorting an element;
    list2.sort();
    // display(list2);
    list1.merge(list2);
    cout<<"after merging list1 with list2 : ";
    display(list1);





    
    // cout<<*(iter)<<" ";
    // iter++;
    // cout<<*(iter)<<" ";
    // iter++;
    // cout<<*(iter)<<" ";
    // iter++;
    // cout<<*(iter)<<" ";



     
    

return 0;
}