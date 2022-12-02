#include<iostream>
using namespace std;
int main()
{
    float rate,slab,tax;
    cout<<"Enter slab :";
    cin>>slab;
    if(slab<=2500)
    {
        rate=slab*(0.00);
    }
    else if(2500<slab && slab<=5000)
    {
        rate=slab*(0.10);
    }
    else if(5000<slab && slab<=10000)
    {
        rate=slab*(0.20);
    }
    else if(10000<slab)
    {
        rate=slab*(0.30);
    }
    tax=rate+slab;
    cout<<"Tax :"<<tax;
}