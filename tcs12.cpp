#include<iostream>
using namespace std;
int main()
{
    int n,count=0,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    int x;
    cin>>x;
    if(d%2==0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                count++;
            }
        }
        sum=count*x;
        cout<<sum;
    }
    else
    {
       for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                count++;
            }
        }
        sum=count*x;
        cout<<sum;
    }    
    return 0;
}