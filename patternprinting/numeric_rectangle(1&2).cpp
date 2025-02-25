#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter two number : ";
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            for(int j=1; j<=m; j++)
            {
                if(j%2==1)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"2";
                }
            }
        }
        else
        {
            for(int j=1; j<=m; j++)
            {
                if(j%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"2";
                }
            }
        }
        cout<<endl;
    } 
}


// code2
/*nt n, m;
    cout<<"Enter two number : ";
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }*/
    
    