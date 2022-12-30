#include<iostream>
using namespace std;
class Food
{
    float qty,total, t = 0, k = 0, p = 0, c = 0, n = 0, r = 0;

    public:
    static int count;
    void Tikka()
    {
        cout << "\n\t\t\t\t\t\tQty For Tikka:";
        cin >> qty;
        t = qty * 220.00;
        cout << "\t\t\t\t\t\ttotal:" << t;
        total = total + t;
        count++;
    }
    void Kajukari()
    {
        cout << "\n\t\t\t\t\t\tQty For Kaju Kari:";
        cin >> qty;
        k = qty * 150.00;
        cout << "\t\t\t\t\t\ttotal:" << k;
        total = total + k;
        count++;
    }
    void Paneer()
    {
        cout << "\n\t\t\t\t\t\tQty For Paneer:";
        cin >> qty;
        p = qty * 280.00;
        cout << "\t\t\t\t\t\ttotal:" << p;
        total = total + p;
        count++;
    }
    void Cheez()
    {
        cout << "\n\t\t\t\t\t\tQty For Cheez:";
        cin >> qty;
        c = qty * 360.00;
        cout << "\t\t\t\t\t\ttotal:" << c;
        total = total + c;
        count++;
    }
    void Nan()
    {
        cout << "\n\t\t\t\t\t\tQty For Nan:";
        cin >> qty;
        n = qty * 50.00;
        cout << "\t\t\t\t\t\ttotal:" << n;
        total = total + n;
        count++;
    }
    void Roti()
    {
        cout << "\n\t\t\t\t\t\tQty For Roti:";
        cin >> qty;
        r = qty * 40.00;
        cout << "\t\t\t\t\t\ttotal:" << r;
        total = total + r;
        count++;
    }
    void totall()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
    }
    void exit()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
        cout << "\n\t\t\t\t\t\ttotal food odear:" << Food::count;
        cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~Exit~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int Food::count;
int main()
{

    Food Denil;
    int ch;
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~Gate~To~Goa~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~     1.Tikka                   220.00       ~";
    cout << "\n\t\t\t\t\t\t~     2.Kaju kari               150.00       ~";
    cout << "\n\t\t\t\t\t\t~     3.Paneer                  280.00       ~";
    cout << "\n\t\t\t\t\t\t~     4.Cheez Tanduri           360.00       ~";
    cout << "\n\t\t\t\t\t\t~     5.Nan                      50.00       ~";
    cout << "\n\t\t\t\t\t\t~     6.Roti                     40.00       ~";
    cout << "\n\t\t\t\t\t\t~     7.total                                ~";
    cout << "\n\t\t\t\t\t\t~     8.Exit                                 ~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    while (ch > 0)
    {
        cout << "\n\t\t\t\t\t\tEnter Your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            Denil.Tikka();
            break;
        case 2:
            Denil.Kajukari();
            break;
        case 3:
            Denil.Paneer();
            break;
        case 4:
            Denil.Cheez();
            break;
        case 5:
            Denil.Nan();
            break;
        case 6:
            Denil.Roti();
            break;
        case 7:
            Denil.totall();
            break;
        case 8:
            Denil.exit();
            break;
            default:
            cout << "Wrong Choice...";
            break;
        }
    }
}