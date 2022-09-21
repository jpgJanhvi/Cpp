#include<iostream>
using namespace std;

void main()
{
    int n,i;
    cout << "enter n: " ;
    cin >> n ;

    cout << "even numbers from 1 to n are: " << "\n" ;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout << i << "," ;
        }
    }
}