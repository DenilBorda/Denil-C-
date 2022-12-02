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
    cout<<"\n Largest number "<<((a>b && a>c)?(a):((b>c)?(b):(c)));
}