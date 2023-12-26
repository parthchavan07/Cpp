#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p;
    cin>>p;
    while(p>0)
    {
       for(int i=0;i<n;i++)
       {
           if(arr[i]=='p' || arr[i]=='P')
           {
               if(arr[i-p]=='t' || arr[i-p]=='T')
               {
                  count++;
                  arr[i-p]='\0';
                  arr[i]='\0';
               }
               else if(arr[i+p]=='t' || arr[i+p]=='T')
               {
                  count++;
                  arr[i+p]='\0';
                  arr[i]='\0';
               }
            }
    }
    p--;
    }
    cout<<count;
}