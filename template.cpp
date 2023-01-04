#include<iostream>
using namespace std;
template<class D>
void display (D d1)
{
    cout<<"Display Template :"<<d1<<endl;
}
template<class x,class y>
void Display(x a,y b)
{
    cout<<"Displaying Template :"<<a<<"\t"<<b<<endl;
}
int main()
{
    display(200);
    display(12.56);
    display('D');
    Display('D',1.25);
    Display('s',25);
    Display(25,1.25);
}