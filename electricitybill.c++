#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill;
    cout<<"Enter Unit :";
    cin>>unit;
    if(unit<=100)
    {
        bill=50+0.60;
    }
    else if(100<unit && unit<300)
    {
        bill=50+60+unit-100*0.80;
    }
    else
    {
        bill=50+60+160+unit-300*0.90;
    }
    if(bill>=300)
    {
        cout<<"Electricity bill :"<<bill;
        bill=bill+(bill*0.15);
        cout<<" \n Your charge with bill is :"<<bill;
    }
    else
    {
        cout<<"\n Electricity bill :"<<bill;
    }
}