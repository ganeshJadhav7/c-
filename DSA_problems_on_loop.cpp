#include<iostream>
using namespace std;

int main()
{
    // problem 1. count the number of digits for a given number n.
    /*int n, sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0)
    {
        sum += 1;
        int que = n / 10;
        n = que;
    }
    cout<<"count number of given number is : "<<sum;*/


    //problem 2. find the sum of digits in a given number n.
    /*int n, sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0)
    {
        int rem = n % 10;
        int que = n / 10;
        sum += rem;
        n = que;
    }
    cout<<"count number of given number is : "<<sum;*/


    // problem 3. Reverse the digits of number.

    /*int n, reverse=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0)
    {
        int rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    cout<<"Reverse number : "<<reverse;*/


    // problem 4. Find the sum of following series.
    /*int n, i=1, series_sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(i <= n)
    {
        if(i%2==1)
        {
            series_sum += i;
        }
        else{
            series_sum -= i;
        }
        i++;
    }
    cout<<"sum of series : "<<series_sum;*/


    // problem 5. print the first n factorial numbers.
    /*int n, i=1;
    cout<<"Enter a number : ";
    cin>>n;
    int fact = 1;
    while(i<=n)
    {
        fact *= i;
        cout<<i<<"! = "<<fact<<endl;
        i++;
    }*/


    // problem 6. Given two numbers a and b. Find a raise to the power b.
    int a, b, result=1;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    for(int i=1; i<=b; i++)
    {
        result = a * result;
    }
    cout<<result;
}