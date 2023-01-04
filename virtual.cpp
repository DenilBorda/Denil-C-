#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"Base Display Function Called...."<<endl;
    }
};
class derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived Class Display Function Called....."<<endl;
    }
};
int main()
{
    Base *p,s;
    derived a;
    p = &a;
    a.display();
    p = &s;
    p->display();
}
