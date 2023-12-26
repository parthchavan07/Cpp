#include<iostream>
using namespace std;
int main()
{
    int n,lar=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(lar<arr[i])
        {
            lar=arr[i];
        }
    }
    cout<<lar;
    
}
