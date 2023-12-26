#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sub[n-1],x=0,count=0;
    for(int i=0;i<n-1;i++)
    {
        sub[x]=arr[i+1]-arr[i];
        cout<<sub[x]<<" ";
        x++;
    }
    return 0;
    for(int i=0;i<n-1;i++)
    {
        if(sub[i]>sub[i+1])
        {
            for(int k=i;k<n;k++)
            {
                 if(sub[i]>sub[k])
                 {
                    count++;
                 }
            }
        }
    }
    cout<<count;
}