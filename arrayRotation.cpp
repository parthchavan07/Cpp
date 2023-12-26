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
    int r,x=0;
    cin>>r;
    for(int i=0;i<(n/2)+1;i++)
    {
        for(int j=0+x;j<n;j++)
        {
            arr2[j+r]=arr[i];
            x++;
            break;
        }
    }
    int k=0;
    for(int i=(n-1)-x;i>=0;i--)
    {
        if(i<0)
            break;
        for(int j=n-(1+k);j>=0;j--)
        {
            arr2[i]=arr[j];
            k++;
            break;
        }
    }
        for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
}