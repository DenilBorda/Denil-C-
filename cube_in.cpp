#include<iostream>
using namespace std;
class cube
{
    public:
    int i,cubes,count;
    void setdata()
    {
        cout<<"Enter Cube Number :";
        cin>>cubes;
    }
};
class derived :public cube
{   
    public:
    void cal()
    {
        for(i=1; i<=cubes; i++)
        {
            count = i * i * i; 
            cout<<" Number Is :"<< i << "And the cube of "<< i << "is :"<<count<<endl;
        }
    } 
}; 
int main()
{
    derived a;
    a.setdata();
    a.cal();
}