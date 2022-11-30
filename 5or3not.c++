#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter A :";
    cin>>a;
    if(a%3==0 && a%5==0)
    {
        cout<<"yes divisible";
    }
    else
    {
        cout<<"not divisible";
    }
}