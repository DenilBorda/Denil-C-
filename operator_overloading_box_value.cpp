#include<iostream>
using namespace std;
class box
{
    int length,breath,height;
    public:
    int setdata(int l,int b,int h);
    void getdata();
    box operator*(box &d);
};
int box :: setdata(int l,int b,int h)
{
    length = l;
    breath = b;
    height = h;
    return l*b*h;
}
box box :: operator*(box &d)
{
    box r;
    r.length = length *d.length;
    r.breath = breath *d.breath;
    r.height = height *d.height;
    return r;
}
void box :: getdata()
{
    cout<<"Length :"<<length<<endl;
    cout<<"Breath :"<<breath<<endl;
    cout<<"Height :"<<height<<endl;
}
int main()
{
    box a,b,c;
    a.setdata(2,2,2);
    a.getdata();
    b.setdata(4,4,4);
    b.getdata();
    c = a * b ;
    c.getdata();
}