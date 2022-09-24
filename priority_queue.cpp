#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int>maxi;


    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(15);
    maxi.push(13);
    maxi.push(6);
    maxi.push(14);

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" " ;
        maxi.pop();
    }cout<<endl;

    mini.push(10);
    mini.push(7);
    mini.push(53);
    mini.push(68);
    mini.push(19);
    
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" " ;
        mini.pop();
    }cout<<endl;

    cout<<"is it empty"<<" "<<mini.empty()<<endl;
}
