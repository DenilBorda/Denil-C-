#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("file1.txt");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else
    cout<<"File Opening Is Fail";
    return 0;
}