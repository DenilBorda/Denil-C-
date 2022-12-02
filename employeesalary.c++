#include<iostream>
using namespace std;
int main()
{
    float basic,hra,da,gross;
    cout<<"Enter salary :";
    cin>>basic;
    if(basic<5000)
    {
        hra=basic*(0.8);
        da=basic*(0.20);
    }
    else if(basic>=5000 && basic<=10000)
    {
        hra=basic*(0.12);
        da=basic*(0.30);
    }
    else if(basic>=10000 && basic<=15000)
    {
        hra=basic*(0.15);
        da=basic*(0.40);
    }
    else if(basic>15000)
    {
        hra=basic*(0.20);
        da=basic*(0.50);
    }
    gross=basic+hra+da;
    cout<<"Salary :"<<gross;
}