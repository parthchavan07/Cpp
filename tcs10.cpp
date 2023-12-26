#include<iostream>
using namespace std;
int main()
{
    char arr[100] [100];
    int n,count=0;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(arr[i][j]=='a')
           {
            count++;
           }
        }
       arr2[i]=count;
       count=0;
    }
    for(int i=0;i<n;i++)
    {
       cout<<arr2[i]<<" ";
    }
    return 0;
}