#include<iostream>
using namespace std;
int main()
{
    int n,count=0,lar=0;
    cin>>n;
    int arr[n],arr2[100],lis[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        lis[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           if(arr[i]>arr[j] && lis[i]<lis[j]+1)
           {
            lis[i]=lis[j]+1;
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(lar<lis[i])
        {
            lar=lis[i];
        }
    }
    cout<<lar;
}