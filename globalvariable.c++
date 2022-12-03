#include<iostream>
using namespace std;
int main()
{
    int m,s,e,total;
    float per;
    void print()
    {
        cout<<"maths\tscience\tenglish\ttotal\tper""\n"<<maths<<"\t"<<science<<"\t"<<english<<"\t"<<total<<"\t"<<per;
    }
    void calculation()
    {
        total = m + s + e;
        per = total / 3;
        cout();
    }
    void setdata()
    cout<<"Enter maths marks : ";
    cin>>m;
    cout<<"Enter science marks :";
    cin>>s;
    cout<<"Enter english marks :";
    cin>>e;
    calculation();
}
int main()
{
    setdata();
}