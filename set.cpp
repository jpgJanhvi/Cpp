#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(6);
    s.insert(41);
    s.insert(7);
    s.insert(19);
    s.insert(7);
    s.insert(19);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    // s.erase(s.begin());
    // for(int i:s){
    //     cout<<i<<" ";
    // }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"num is present or not"<<"  "<<s.count(7)<<endl;
    
//     set<int>::iterator itr= s.find(41);
//     for(auto it=itr;it!=s.end();it++ ){
//         cout<<it;
//     }cout<<endl;
// }