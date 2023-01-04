#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display() = 0 ;
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
    Base *p;
    derived a;
    p = &a;
    p->display();
}
