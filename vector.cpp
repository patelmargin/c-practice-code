#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
            cout<<"displaying this vector : "<<endl;


    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main(){
    //way to create vector
    vector<int> vec1;// 0 length integer vector
    vector<char> vec2(3);//3_ element length chracter vector
    // vector<int> vec3(vec2);// 3_element vector form vec2//this line output is blank line
    vector<int> vec4(2,6);
    // vec4.push_back('6');//this line add 6 integer to vec2

    display(vec4);

    int element,size=5;



    //         cout<<"enter size to add to this vector: ";
    //     cin>>size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add to this vector :";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
        // display(vec1);

        // vector<int> :: iterator iter = vec1.begin();
        // vec1.insert(iter+1,4,556);
        // display(vec1);


    

return 0;
}