#include<iostream>
using namespace std;

int add(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

int add(int n1, int n2, int n3)
{
    int sum = n1 + n2 + n3;
    return sum;
}

float add(float n1, float n2)
{
    float sum = n1 + n2;
    return sum;
}

int main()
{
    int a, b;
    float c=3.1, d=4.1;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Addition of two integer numbers : "<<add(a, b)<<endl;
    cout<<"Addition of three integer numbers : "<<add(a, b, 3)<<endl;
    cout<<"Addition of two floating numbers : "<<add(c, d)<<endl;

}