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

double morePrecision(int n,int precision,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
    }
    for(double j=ans;j*j<n;j=j+factor){
        ans=j;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int temp=BinarySearch(n);
    cout<<"answer is"<<" "<<morePrecision(n,3,temp);
    
}