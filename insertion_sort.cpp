#include<iostream>
using namespace std;

void change(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    change(arr,n);
    printArray(arr,n);
}