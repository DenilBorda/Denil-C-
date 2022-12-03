#include<iostream>
using namespace std;
int mul(int a,int b)
{
    int total;
    total = a * b;
    cout<<"Multiplication of a and b is "<<total;
}
int main()
{
    int x,y;
    cout<<"Enter X :";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;
    mul(x,y);
}