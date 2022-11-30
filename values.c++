#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter X :";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;
    if(x<2000||x>3000)
    {
        cout<<" X ";
    }
    if(y>100||y<500)
    {
        cout<<" Y ";
    }

}