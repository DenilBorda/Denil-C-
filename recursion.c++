#include<iostream>
using namespace std;
int fun(int n)
{
    cout<<"Inside function :"<<n;
    if(n<5)
    {
        n++;
        fun(n);
    }
    else
    {
        return 0;
    }
    cout<<"Outside function :"<<n;
}
int main()
{
    int fun(1);
}