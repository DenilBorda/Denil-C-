#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks :";
    cin>>marks;
    if(marks>75)
    {
        cout<<" Grade A ";
    }
    else if(60<=marks && marks<75)
    {
        cout<<" Grade B ";
    }
    else if(45<=marks && marks 45)
    {
        cout<<" Grade C ";
    }
    else if(35<marks && marks 45)
    {
        cout<<" Fail ";
    }
}