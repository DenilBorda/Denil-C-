#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter ch :";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='u')
    {
        cout<<" Vowel ";
    }
    else
    {
        cout<<" Consonant ";
    }
}