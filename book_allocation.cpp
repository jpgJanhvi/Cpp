#include<iostream>
using namespace std;

bool IsPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
        
    }
    return true;
}

int allocate_book(int arr[],int n,int m){
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
    cout<<"enter number no students"<<" "<<endl;
    cin>>m;
    cout<<"enter number of books"<<" "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<" "<<endl;
    for(i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<"that minimum possibler number:"<<" "<<allocate_book(arr,n,m);
}