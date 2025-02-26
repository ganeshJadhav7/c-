#include<iostream>
using namespace std;
// find the unique number in given array where all the elements are being repeated twice with one value being unique.

int main()
{
    int array[] = {2, 3, 1, 3, 2, 4, 4, 5, 1};
    int size = 9;

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        if(array[i]>0)
        {
            cout<<"Unique value is "<<array[i];
        }
    }   
}