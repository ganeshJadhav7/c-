#include<iostream>
using namespace std;
int main()
{
    // diference b/w size of array and length.
    /*int array[] = {1, 2, 3, 4};
    cout<<"size of array : "<<sizeof(array)<<endl;
    cout<<"length of array : "<<sizeof(array)/sizeof(array[0])<<endl;*/


    // Traversing trough the array.
    // 1. for loop.
    // 2. for each loop.
    // 3. while loop.

    // 1. for loop.
    /*int size = sizeof(array)/sizeof(array[0]);
    for(int j=0; j<size; j++)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;*/

    // 2. for each loop.
    /*for(int ele:array)
    {
        cout<<ele<<endl;
    }
    cout<<endl;*/

    // 3. while loop.
    /*int index=0;
    while(index<size)
    {
        cout<<array[index]<<endl;
        index++;
    }
    cout<<endl;*/


    // Taking elements as a input from user.
    /*char vowels[5];
    for(int i=0; i<5; i++)
    {
        cin>>vowels[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<vowels[i]<<endl;
    }
    cout<<endl;*/

    
    // calculate a sum of all elements given in a array.
    /*int array[] = {3, 4, 10, 11};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += array[i];
    }
    cout<<"Sum of elements : "<<sum;*/


    // find the max value out of all the elements in the array.
    /*int array[] = {3, 7, 18, 9, 11};
    int size = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"max ele of array : "<<max;*/


    //Linear search
    //Finding specific element in array.
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