#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int count=0,x=1,t=n.length(),y=0;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]==' ')
        {
            x=1;
            y++;
            for(int j=i+x;j<t;j++)
            {
                cout<<n[j];
                count++;
                x=0;
            }
            cout<<" ";
            count++;
        }
        t=t-count;
        count=0;       
    }
    for(int k=0;k<n.length();k++)
    {
        if(n[k]==' ')
        {
           break;
        }
        cout<<n[k];
    } 
    return 0;
}