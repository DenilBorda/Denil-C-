#include<iostream>
using namespace std;
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int x,y;
    cout<<"Enter X :";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;
    int total=mul(x,y);
    cout<<"Multiplication of a and b :"<<total;
}