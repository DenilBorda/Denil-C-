#include<iostream>
using namespace std;
int reverse (int n)
{
    int b=0,d;
    while(n!=0)
    {
        d = n % 10;
        b = b * 10 + d;
        n = n / 10;
    }
    return b;
}
int main()
{
    int n,a;
    cout<<"Enter number :";
    cin>>n;
    a=reverse(n);
    cout<<"Reverse number is "<<a;
}