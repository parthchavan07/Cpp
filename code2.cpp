#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==0)
            {
                break;
            }
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=0;
            }
        }
        if(arr[i]!=0)
        {
        cout<<arr[i]<<" "<<"occurs"<<" "<<count<<" "<<"times"<<endl;
        }
        count=1;
    }
}