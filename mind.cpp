#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1,s2;
    cin>>s1>>s2;
    string x="\0";
    int y=0,k=s.length(),count=0;
    for(int i=0;i<k;i++)
    {
       for(int j=i;j<k;j++)
       {
          if(s[j]==' ')
          {
            y=j;
            break;
          }
          count++;
          x=x+s[j];
       }
       if(count>k)
       {
          return 0;
       }
       if(x.compare(s1)==0)
       {
          cout<<s2<<" ";
       }
       else
       {
          cout<<x<<" ";
       } 
       i=y;
       x="\0"; 
    }
}    