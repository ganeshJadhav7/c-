#include<iostream>
using namespace std;

int main()
{
    // pattern 2
    int n,m;
    cout<<"Enter two no : ";
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==1 || i==n || j==1 || j==m)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}