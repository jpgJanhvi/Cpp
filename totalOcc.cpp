#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1 ;
        }
        else if(key>=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr1[8]={2,4,4,4,5,5,5,6};

    pair<int,int>p;
    p.first=firstOcc(arr1,8,4);
    p.second=lastOcc(arr1,8,4);

    cout<<"first occurence of the given element is"<<p.first<<endl;
    cout<<"last occurence of the given element is"<<p.second<<endl;

    int element_occurence=p.second-p.first+1;

    cout<<"total no of occurence of an element "<<"  "<<element_occurence<<endl;

}