#include<iostream>
using namespace std;

int main()
{
    // find the max value out of all the elements in the array.
    int array[] = {3, 7, 18, 9, 11};
    int size = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"max ele of array : "<<max;

}