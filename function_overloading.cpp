#include<iostream>
using namespace std;
class test
{
  public:
  void total (int a,int b)
  {
    cout<<"Addition of a and b is :"<<a+b<<endl;
  }  
  void total (int x)
  {
    cout<<"Addition of a is :"<<x<<endl;
  }
  void total (double x)
  {
    cout<<"Multiplication of x is :"<<x<<endl;
  }
};
int main()
{
    test a;
    a.total(5);
    a.total(2,3);
    a.total(10.5);
}