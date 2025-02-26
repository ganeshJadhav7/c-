#include<iostream>
using namespace std;

//count the number of triplets whose sum is eqaul to the given value x.

int main()
{
    int array[] = {3, 1, 2, 4, 0, 6};
    int targateSum, triplets=0;
    cout<<"Enter targateSum : ";
    cin>>targateSum;
    
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k=j+1; k<6; k++)
            {
                if((array[i]+array[j]+array[k]) == targateSum)
                {
                    triplets++;
                    cout<<"triplet is : "<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
                }
            }
        }
    }
    cout<<"total triplets are "<<triplets;

}