#include<iostream>
using namespace std;

int main()
{
    int array[] = {3, 9, 18, 11, 7};
    int key = 11;
    int ans = -1;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0; i<size; i++)
    {
        if(array[i]==key)
        {
            ans = i;
        }
    }
    cout<<ans; 

}