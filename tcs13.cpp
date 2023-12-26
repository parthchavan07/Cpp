#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,arr[100];
    cin>>n;
    int count=0,x=0,z=0,y=0,p=n;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<n;j++)
        {
            if(s[j]=='a')
            {
                count++;
            }
            y++;
        }
        i=y-1;
        n=n+p;
        arr[x]=count;
        x++;
        count=0;
    }
    for(int i=0;i<x;i++)
    {
        if(z<arr[i])
        {
            z=arr[i];
        }
    }
    cout<<z;
}