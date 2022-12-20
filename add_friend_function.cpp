#include<iostream>
using namespace std;
class Num
{
    int a,b;
    public:
    void setdata(int x , int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout<<"Num is :"<<a<<"+"<<b<<"i"<<endl;
    }
    friend Num add(Num,Num);
};
Num add(Num d ,Num a)
    {
        Num z;
        z.a = d.a + a.a;
        z.b = d.b + a.b;
        return z;
    }
int main()
{
    Num a,b,c;
    a.setdata(2,3);
    b.setdata(4,5);
    c = add(a,b);
    c.getdata();
}
