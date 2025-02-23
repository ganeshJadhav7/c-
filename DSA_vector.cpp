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

    
}
