#include<iostream>
using namespace std;
class bank
{
    int amount=10000;
    public:
    void deposite(int n)
    {
        amount = amount + n;
    }
    int withdraw(int n)
    {
        if (n <= amount)
        {
            amount = amount - n;
        }
        else
        {
            cout<<"Influence Balance.....:";
        }
    }
    void balance()
    {
        cout<<"\n Total Balance :"<<amount;
    }
};
int main()
{
    bank a;
    a.deposite(5000);
    a.withdraw(10000);
    a.balance();    
}
