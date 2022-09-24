#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    //binary search
    
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    v.push_back(9);

    //for finding the number whether it is present or not;
    cout<<"finding the element"<<"  "<<binary_search(v.begin(),v.end(),9)<<endl;

    //lower bound 
    cout<<"lower bound"<<"  "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    //upper bound
    cout<<"upper bound"<<"  "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=7;
    int b=8;
    //maximum
    cout<<"max"<<" "<<max(a,b)<<endl;

    //minimum
    cout<<"min"<<" "<<min(a,b)<<endl;

    //swapping
    swap(a,b);

    cout<<"swap a"<<" "<<a<<endl;

    string r="janhvi pandey";
    reverse(r.begin(),r.end());
    cout<<"string "<<r<<endl;

    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    //sorting
    sort(v.begin(),v.end());
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


}