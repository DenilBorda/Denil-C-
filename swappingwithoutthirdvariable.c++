#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Ether B :";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<" values "<<a<<b;
}