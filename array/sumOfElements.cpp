#include<iostream>
using namespace std;

int main()
{
    // calculate a sum of all elements given in a array.
    int array[] = {3, 4, 10, 11};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += array[i];
    }
    cout<<"Sum of elements : "<<sum;

}