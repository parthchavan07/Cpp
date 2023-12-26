#include<iostream>
using namespace std;
int diff(int a[],int b)
{
    int arr2[100],x=0,y=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i;j<b-1;j++)
        {
            if(a[j+1]>a[i])
            {
            arr2[x]=a[j+1]-a[i];
            if(arr2[x]<0)
            {
                arr2[x]=arr2[x]*-1;
            }
            x++;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        if(y<arr2[i])
        {
            y=arr2[i];
        }
    }
    return y;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<diff(arr,n);
}
