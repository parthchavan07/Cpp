#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int count=0;
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]==' ')
        {
            count++;
        }
        if(count==0)
        { 
            if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
        {
            n[i]='%';
            cout<<n[i];
        }
        else if(n[i]!=' ') 
        {
            cout<<n[i];
        }
        }
        else if(count==1)
        {
            if(n[i]!='a' && n[i]!='e' && n[i]!='i' && n[i]!='o' && n[i]!='u' && n[i]!=' ')
        {
            n[i]='#';
            cout<<n[i];
        }
        else if(n[i]!=' ') 
        {
            cout<<n[i];
        }
        }
        else if(count==2)
        {
            if(n[i]<97 || n[i]>122)
            {
                if(n[i]!=' ')
                cout<<n[i];
            }
            if(n[i]>=97 && n[i]<=122 && n[i]!=' ')
            {
            n[i]=n[i]-32;
            cout<<n[i];
            }
        }
        else if(count==3)
        {
            count=0;
            cout<<" ";
        }  
    }
}
