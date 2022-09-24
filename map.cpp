#include<iostream>
#include<map>
using namespace std;
int main(){
    int i;
    map<int,string> m;
    m[1]="janhvi";
    m[2]="pandey";
    m[4]="ma";
    m[5]="pops";
    m[6]="joey";
    m[7]="om";
    m[8]="sushi";

    m.insert({3,"jalp"});
    
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" ";
    }cout<<endl;

    cout<<"finding value"<<"  "<<m.count(4)<<endl;

    m.erase(5);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" ";
    }cout<<endl;

    auto it=m.find(3);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    

}