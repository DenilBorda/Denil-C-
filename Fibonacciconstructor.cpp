#include<iostream>
using namespace std;
class fibonacci
{
    public:
    int n,i,k,m1=0,m2=1;
    fibonacci()
    {
        m1=-1;
        m2=1;
    }
    void fib(int n)
    {
        cout<<"/n Fibonacci series :";
        for(i=0; i<n; i++)
        {
            k = m1 + m2;
            cout<<k<<endl;
            m1 = m2;
            m2 = k;
        }
    }
};
int main()
{
    fibonacci a;
    int n;
    cout<<"\n Enter range :";
    cin>>n;
    a.fib(n);
    return 0;
}