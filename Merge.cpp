#include<iostream>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int x;
    string b="\0";
    if(s1.length()<+s2.length())
    {
        x=s2.length();
    }
    else if(s1.length()>s2.length())
    {
        x=s1.length();
    }
    else
    {
        x=s1.length();
    }
   for(int i=0;i<x;i++)
   {
    if(i<s1.length())
    {
    b=b+s1[i];
    }
    else
    {
        b=b+" ";
    }

    if(i<s2.length())
    {
    b=b+s2[i];
    }
    else{
        b=b+" ";
    }
   }
   cout<<b;
}