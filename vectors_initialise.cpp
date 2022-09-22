#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    vector<int> a(7,1);

    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
        i++;
    }cout<<endl;

    cout<<"size"<<v.size()<<endl;

    v.push_back(5);
    cout<<"size"<<v.size()<<endl;

    v.push_back(7);
    cout<<"size"<<v.size()<<endl;

    v.push_back(10);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

    cout<<"element at 3rd index"<<" "<<v.at(3)<<endl;

    cout<<"front"<<" "<<v.front()<<endl;

    cout<<"back"<<" "<<v.back()<<endl;

    cout<<"before pop ele"<<" "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop ele"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size"<<" "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<" "<<v.size()<<endl;
}