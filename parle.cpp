#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);
    int count=0,k=0,z=s.length(),r=0;
    int x;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=k;j<s.length();j++)
        {
            if(s[z-1]==s1[j])
            {
                x=0;
                count++;
            }
            if(s1[i]==s[j])
            {
                count++;
                cout<<s[j];
                x=j+1;
            }
        }
        k=x;
    }
    if(count==s1.length())
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
