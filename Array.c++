#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    for(i=0; i<5;i++)
    {
        cout<<"a["<<i<<"] :";
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"\t arr["<<i<<"] :"<<arr[i];
    }
}