#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setdata(int l , int b , int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void getdata()
    {
        cout<<"Value of Box is :"<<l*b*h;
    }
};
int main()
{
    Box a;
    a.setdata(2,3,4);
    a.getdata();
}