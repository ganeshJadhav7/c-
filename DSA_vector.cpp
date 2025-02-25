#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // size and capacity of vector
    /*vector<int> v;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;*/



    // for loop
    // Taking input and giving output from dynamic size of array.
    /*vector<int> v;
    for(int i=0; i<5; i++)
    {
        int ele;
        cout<<"Enter ele : ";
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }*/


    // Taking input and giving output from fixed size of array.
    /*vector<int> v(5);
    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"Elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }*/


    // for each loop
    /*vector<int> v(5);

    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"elements : ";
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;*/

    
    // while loop
    /*vector<int> v(5);
    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"elements : ";
    int idx = 0;
    while(idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }*/


    // Find the last occurance of x in given array.
    /*vector<int> v(7);
    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    int x, ans;
    cout<<"Enter a elemet to find it,s last occurance : ";
    cin>>x;
    for(int i=v.size()-1; i>0; i--)
    {
        if(v[i] == x)
        {
            cout<<"Last occurance of given element is : "<<i;
            break;
        }
    }*/



    // Count the number of occurances of a particular element x.
    /*vector<int> v(7);
    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    int x, count=0;
    cout<<"Enter a elemet to find it,s occurance count : ";
    cin>>x;
    for(int ele:v)
    {
        if(ele == x)
        {
            count++;
        }
    }
    cout<<"occurance count of given element : "<<count;*/



    // Count the numer of elements strictly greater than x.
    /*vector<int> v(7);
    cout<<"Enter elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    int x, count=0;
    cout<<"Enter x : ";
    cin>>x;
    for(int ele:v)
    {
        if(ele > x)
        {
            count++;
        }
    }
    cout<<"Count is : "<<count;*/


    // check the given array is sorted or not.
    /*int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    bool sorted = true;
    for(int i=1; i<size-1; i++)
    {
        if(array[i]<=array[i-1])
        {
            sorted = false;
        }
    }
    cout<<sorted;*/

    // Find the diffrence between sum of ele at even indices and sum of ele at odd indices.
    /*int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int evensum=0, oddsum=0;
    for(int i=0; i<size; i++)
    {
        if(array[i] % 2 == 0)
        {
            evensum  = evensum + array[i];
        }
        else
        {
            oddsum += array[i];
        }
    }
    cout<<evensum<<endl;
    cout<<oddsum<<endl;
    cout<<"Diffrence b/w evensum and oddsum is : "<<evensum - oddsum;*/
}
