#include<iostream>
using namespace std;

int checkPaln(char name[],int n){
    
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name:"<<" ";
    cout<<name<<endl;
    int len = getLength(name);
    cout << "length:"<<" "<< len << endl;
    reverse(name, len);
    cout << "your name:"<<" ";
    cout<<name<<endl;

    cout<<"palindrome or not:"<<" "<<checkPaln(name,len)<<endl;

    return 0;
    
}