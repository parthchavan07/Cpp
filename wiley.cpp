#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n],p[n],k=0;
    char arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        cin>>arr[i];
    }
    for(int i=0;i<2;i++)
    {
        if(arr2[i]!='c')
        {
            break;
        }
    for(int j=0;j<n;j++)
    {
        if(arr[i]>=arr[j])
        {
            count++;
        }
    }
    if(count-1==n)
    {
        cout<<arr[i];
        return 0;
    }
    }
    return 0;
}