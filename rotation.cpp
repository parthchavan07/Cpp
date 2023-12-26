#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r;
    cin>>r;
    if(r>=0)
    {
        for(int i=n-r;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<n-r;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        for(int i=0-r;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<0-r;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}