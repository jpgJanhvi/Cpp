#include<iostream>
using namespace std;
void sort(int arr[],int n){
    bool swapped=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
    
}
int main(){
    int arr[5]={32,54,73,6,67};
    int n;
    cout<<"selection sorted array is"<<" "<<sort(arr,5)<<endl;
}