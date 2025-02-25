#include<iostream>
using namespace std;
int main()
{
    // pattern 1
    /*for(int i=0; i<3; i++)
    {
        for(int j=0; j<6; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    // pattern 2
    /*int n,m;
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
    }*/

    //pattern3
    /*int n, m;
    cout<<"Enter n and m ";
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
            for(int j=1; j<=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
    }*/

    //pattern4
    /*int n, m;
    cout<<"Enter n and m ";
    cin>>n>>m;
    for(int i=n; i>=1; i--)
    {
            for(int j=i; j>=1; j--)
            {
                cout<<"*";
            }
            cout<<endl;
    }*/

    
    // pattern5
    /*int n;
    cout<<"Enter a numnber : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/



    // pattern6   
    /*int n;
    cout<<"enter a number : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<j;
        }
        for(int j=1; j<=i-1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }*/
    


    // pattern7
    // int n, m;
    // cout<<"Enter two number : ";
    // cin>>n>>m;

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=m; j++)
    //     {
    //         if(i==1 || i==n || j==1 || j==m)
    //         {
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // pattern8
    // code1
    /*int n, m;
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
}*/

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


   // numeric trangular pattern
    //pattern 1
    /*int n;
    cout<<"enter a number : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }*/


    // pattern 2
    /*int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=i-1; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }*/

   
}



