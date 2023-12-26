#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int arr[n];
    int p,temp,temp2;
    cin>>p;
    int arr2[p];
    int arr3[n+p];
    float y;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<p;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr[i];
    }
    for(int i=n;i<n+p;i++)
    {
        for(int j=0+x;j<p;j++)
        {
            arr3[i]=arr2[j];
            x++;
            break;
        }
    }
    for(int i=0;i<n+p;i++)
    {
        for(int j=0;j<n+p;j++)
        {
            if(arr3[i]<arr3[j])
            {
               temp=arr3[j];
               temp2=arr3[i];
               arr3[i]=temp;
               arr3[j]=temp2;
            }
        }
    }
    int sum;
    float s=2;
    x=n+p;
    if(x % 2 ==0)
    {
        sum=x/2;
        x=arr3[sum]+arr3[sum-1];
        y=x/s;
        cout<<y;
    }
    else
    {
        sum=x/2;
        cout<<arr3[sum];
    }
     return 0;
}