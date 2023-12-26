#include<iostream>
using namespace std;
int penalty(int a[],int b)
{
   int dif=0,x=1,sum=0;
   if(b%2!=0)
   {
    sum=a[b-1]-a[b-2];
    if(sum<0)
    {
        sum=sum*-1;
    }
   }
   for(int i=0;i<b-1;i++)
   {
    for(int j=i+1;x!=0;j++)
    {
       dif=a[i]-a[j];
       if(dif<0)
       {
        dif=dif*-1;
       }
       sum=sum+dif;
       x--;
    }
    x=1;
    i++;
   }
   return sum;
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
    cout<<penalty(arr,n);
}