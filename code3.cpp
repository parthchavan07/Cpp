#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    string y="\0";
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='#')
        {
            y=y+n[i];
        }
    }
    for(int i=0;i<n.length();i++)
    {
        if(n[i]!='#')
        {
            y=y+n[i];
        }
    }
    cout<<y;
}