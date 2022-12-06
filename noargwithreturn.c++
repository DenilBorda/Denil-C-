#include<iostream>
using namespace std;
int add()
{
    int a,b,c;
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    c = a + b;
    return c;
    return a + b;
}
int main()
{
    int x = add();
    cout<<"A addition of a and b is :"<<x;
}