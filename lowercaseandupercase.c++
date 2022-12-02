#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter ch :";
    cin>>a;
    if(a<=65 && a<=90)
    {
        a=a-32;
        cout<<"swapping alphabat :"<<a;
    }
    else
    {
        a=a+32;
        cout<<"swapping alphabat "<<a;
    }
}