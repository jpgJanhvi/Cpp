#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[], int n,int arr2[],int m,int arr3[]){
    int j=0,i=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6]={2,3,6,7,9,10};
    int arr2[5]={1,2,4,8,11};
    int arr3[11]={0};
    merge(arr1,6,arr2,5,arr3);
    printArray(arr3,8);

    return 0;

}