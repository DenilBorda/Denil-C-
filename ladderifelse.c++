#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    cout<<"Enter C :";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"A is larger number";
    }
    else if(b>c)
    {
        cout<<"B is larger number";
    }
    else
    {
        cout<<"C is larger number";
    }
}