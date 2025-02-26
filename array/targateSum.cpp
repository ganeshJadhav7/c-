#include<iostream>
using namespace std;

int main()
{
    // find the total number of pairs in the array whose sum is equal to the given value x.
    int array[] = {3, 4, 6, 7, 1};
    int targateSum, pairs=0;
    cout<<"Enter targate sum element : ";
    cin>>targateSum;

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(array[i]+array[j] == targateSum)
            {
                pairs++;
                cout<<"paire of "<<array[i]<<" & "<<array[j]<<endl;
            }
        }
    }
    cout<<"Total number of pairs : "<<pairs;
}

