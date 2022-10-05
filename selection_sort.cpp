#include<iostream>
using namespace std;
void sorting(int arr[],int n){
    int j;
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    sorting(arr,n);
    printArray(arr,n);
}