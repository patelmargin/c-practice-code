#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
map<string ,int> marksmap;
marksmap ["margin"] =98;
marksmap["harsh"] =68;
marksmap["jay"] =75;

map<string ,int>  :: iterator iter;
for(iter=marksmap.begin();iter!=marksmap.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    // cout<<(*iter).second<<endl;
}
return 0;
}