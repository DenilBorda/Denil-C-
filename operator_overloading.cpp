#include<iostream>
using namespace std;
class Num
{
    int real,img;
    public:
    void setdata(int r,int i);
    void getdata()
    {
        cout<<"Num is :"<<real<<"+"<<img<<"i"<<endl;
    }
    Num operator+ (Num &z)
    {
        Num t;
        t.real = real + z.real;
        t.real = img + z.img;
        return t;
    }
};
void Num ::setdata(int r,int i)
{
    real = r;
    img = i;
}
int main()
{
    Num a,b,c;
    a.setdata(2,3);
    b.setdata(4,5);
    a.getdata();
    b.getdata();
    c = a + b;
    c.getdata();
}