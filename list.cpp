#include <iostream>
#include<list>
using namespace std;

int main() {
	list<int>l;
	l.push_back(1);
	l.push_front(3);
	l.push_back(4);
	l.push_front(33);
	l.push_back(15);
	l.push_front(36);

	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;

	l.erase(l.begin());
	cout<<"after erase"<<endl;
	for(int i:l){
		cout<<i<<" ";
	}
}