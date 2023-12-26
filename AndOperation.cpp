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
    int a,o,count=0;
    for(int j=0;j<n-1;j++)
    {
         a=(arr[j] & arr[j+1])*2;
         o=arr[j] | arr[j+1];
         if(a<o)
         {
            count++;
         }
    }
cout<<count-1;
    
}
