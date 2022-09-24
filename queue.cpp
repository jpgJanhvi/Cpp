#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(10);
    q.push(7);
    q.push(18);
    q.push(5);
    q.push(4);

    
    q.pop();
    cout<<"second elment"<<" "<<q.front()<<endl;

    cout<<"size"<<" "<<q.size()<<endl;

    

}