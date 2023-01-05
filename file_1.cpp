#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"Wel-come to skillQude";
        filestream<<"\nwe started new lab";
        filestream<<"\nwe started new branch";
        filestream<<"\nWe learn cpp program";
    }
    else
    cout<<"File opening is fail";
    return 0;
}