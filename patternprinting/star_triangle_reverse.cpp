#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter n and m ";
    cin>>n>>m;
    for(int i=n; i>=1; i--)
    {
            for(int j=i; j>=1; j--)
            {
                cout<<"*";
            }
            cout<<endl;
    }

}