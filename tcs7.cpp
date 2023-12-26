#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    m=n;
    int arr[n+1];
    int x=0,j=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=0)
       {
        cout<<arr[i]<<" ";
        m--;
       }
    }
    for(int i=0;i<m;i++)
    {
        cout<<"0"<<" ";
    }
    return 0;
}