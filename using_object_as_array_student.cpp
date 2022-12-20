#include <iostream>
using namespace std;
class result
{
public:
    int total, per, m, s, e;
    void setdata()
    {
        cout << "Enter Maths Marks :";
        cin >> m;
        cout << "Enter Science Marks :";
        cin >> s;
        cout << "Enter English Marks :";
        cin >> e;
    }
    void calculate()
    {
        total = m + s + e;
        cout << "Total :" << total << endl;
        per = total / 3;
        cout << "Percentage :" << per << endl;
    }
};
int main()
{
    result a[5], b;
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter Student Detail is :-"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<"Student Detail is :-"<<i+1<<endl;
        a[i].calculate();
        cout<<endl;
    }
}
