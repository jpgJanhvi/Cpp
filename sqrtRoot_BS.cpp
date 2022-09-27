#include<iostream>
using namespace std;

long long int BinarySearch(int num){
    int s=0;
    int e=num;
    long long int ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        int sqrt=mid*mid;
        if(sqrt==num){
            return mid;
        }
        else if(sqrt<num){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }return ans;
}

int main(){
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    cout<<"the sqr root of num is:"<<" "<<BinarySearch(num)<<endl;
}