#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(5);
    d.push_front(4);
    d.push_back(6);
    d.push_front(8);
    d.push_front(11);
    d.push_back(7);
    d.push_front(12);
    d.push_front(19);
    d.push_back(22);
    d.push_front(10);
    d.push_front(15);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    d.front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    d.back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<d.at(2)<<endl;

    cout<<"size"<<" "<<d.size()<<endl;

    cout<<d.empty()<<endl;

}