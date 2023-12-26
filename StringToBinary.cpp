#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int arr[7]={64,32,16,8,4,2,1};
    int arr2[7]={0,0,0,0,0,0,0};
    for(int j=0;j<n.length();j++)
    {
       for(int i=0;i<7;i++)
       {
           if(n[j]-arr[i]>=0)
           {
           arr2[i]=1;
           n[j]=n[j]-arr[i];
           }
       }
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i];
        if(arr2[i]!=0)
        {
            arr2[i]=0;
        }
    }
    cout<<" ";
    }
    return 0;
}