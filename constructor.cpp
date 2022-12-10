#include<iostream>
using namespace std;
class Test 
{
    public:
    Test() //default constructor
    {
        cout<<"Defaukt constructor is called ...."<<endl;
    }
    Test(int n) //parameterized constructor
    {
        cout<<"Parameterized constructor is called ..... n"<<n<<endl;
    }
    Test(char n)    //parameterized constructor
    {
        cout<<"Parameterized constructor is called....n"<<n<<endl;
    }
};
int main()
{
    Test a,b(10),c('A');
}