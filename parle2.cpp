#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    char s1[4]={'N' , 'W' , 'S' , 'E'};
    char s2[4]={'N' , 'E' , 'S' , 'W'};
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(count>3)
        {
            count=0;
        }
        if(count<-3)
        {
            count=0;
        }
        if(s[i]=='L')
        {
            count++;
        }
        if(s[i]=='R')
        {
            count--;
        }
    }
    if(count<0)
    {
        count=count*(-1);
        cout<<s2[count];
        return 0;
    }
    if(count>=0)
    {
        if(count>3)
        {

        }
        cout<<s1[count];
        return 0;
    }
}