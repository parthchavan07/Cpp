#include<iostream>
using namespace std;
int main()
{
    int n,temp,x=0,y=0;
    cin>>n;
    int arr[n],all[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
            }
        }
    }
    if(arr[0]%2==0)
    {
       for(int i=0;i<n;i++)
       {
           if(arr[i]%2==0)
           {
            all[x]=arr[i];
            x++;
            x++;
           }   
       }
       x=1;
       for(int i=1;i<n;i++)
       {
           if(arr[i]%2!=0)
           {
            all[x]=arr[i];
            x++;
            x++;
           }   
       }
    }
    else if(arr[0]%2!=0)
    {
       for(int i=0;i<n;i++)
       {
           if(arr[i]%2!=0)
           {
            all[x]=arr[i];
            x++;
            x++;
           }   
       }
       x=1;
       for(int i=1;i<n;i++)
       {
           if(arr[i]%2==0)
           {
            all[x]=arr[i];
            x++;
            x++;
           }   
       } 
    }
    for(int i=0;i<n;i++)
       {
           cout<<all[i]<<" ";
       }
}