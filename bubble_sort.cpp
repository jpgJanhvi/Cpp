#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int n;
    cout<<"enter the size of an array:"<<" "<<endl;
    cin>>n;
    int arr[10];
    cout<<"enter array elements:"<<" "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    printArray(arr,n);
}