#include<iostream>
using namespace std;
class student
{
    public:
    int m,s,e,total,per;
    void setdata()
    {
        cout<<"Enter Maths marks :";
        cin>>m;
        cout<<"Enter Science marks :";
        cin>>s;
        cout<<"Enter English marks :";
        cin>>e;
    }
    void calculate()
    {
     total = m + s + e;
     cout<<"Total :"<<total<<endl;
     per = total / 3;   
     cout<<"per :"<<per<<endl;
    }

};
int main()
{
    student  denil,jemin;
    denil.setdata();
    denil.calculate();
    jemin.setdata();
    jemin.calculate();
}