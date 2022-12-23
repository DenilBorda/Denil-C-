#include<iostream>
using namespace std;
class bank
{
    int deposite,withdraw,showbalance;
    public:
    void setdata()
    {
        cout<<"Enter Deposite Amount :";
        cin>>deposite;
        cout<<"Enter Withdraw Amount :";
        cin>>withdraw;
    }
    int calculate()
    {
        showbalance = deposite - withdraw;
    }
    void display()
    {
        cout<<"Total balance :"<<showbalance<<endl;
    }
};
int main()
{
    bank a;
    a.setdata();
    a.calculate();
    a.display();    
}

