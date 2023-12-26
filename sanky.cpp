#include<iostream>
using namespace std;
int main()
{
    int n,s,count=0,x=0,temp,y=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]<s)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
}