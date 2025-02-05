#include<iostream>
using namespace std;

int num = 4;

int add(int n1, int n2=1, int n3=2) // here n2 and n3 are default parameters.
{
    return (n1 + n2 + n3);
}
int main()
{
    // pass by referance
    int p = 5;
    int &q = p;
    q++;
    cout<<p;
    cout<<&p<<endl; 
    cout<<&q<<endl; //p and q pointed to same memory location in wich 5 value is stored;

    // Default parameter values
    cout<<add(5);
}