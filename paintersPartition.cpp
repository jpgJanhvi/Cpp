#include<iostream>
using namespace std;

bool IsPossible(int arr[],int n,int m,int mid){
    int boardcount=1;
    int paintersum=0;
    for(int i=0;i<n;i++){
        if(paintersum+arr[i]<=mid){
            paintersum+=arr[i];
        }
        else{
            boardcount++;
            if(paintersum>m||arr[i]>mid){
                return false;
            }
            paintersum=arr[i];
        }

    }
    return true;
}

int partition(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){

        if(IsPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    int m,n,mid,i;
    cout<<"enter number no painters"<<" "<<endl;
    cin>>m;
    cout<<"enter number of boards"<<" "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<" "<<endl;
    for(i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<"that minimum possibler number:"<<" "<<partition(arr,n,m);
}