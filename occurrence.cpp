#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>=mid){
            start=mid+1;
        }
        else
        end=mid-1;
       

    }
    return ans;
}
int lastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>=mid){
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
    
    int firstocc=firstOccurence(arr1,8,5);
    int lastocc=lastOccurence(arr1,8,5);

    cout<<"first occurence of the given element is"<<firstocc<<endl;
    cout<<"last occurence of the given element is"<<lastocc<<endl;

}
