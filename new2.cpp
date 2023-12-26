#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,k=1;
    cin>>n;
    int arr[n],arr2[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int y=0;
    while(k<n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
            sum=sum+arr[j];
            j=j+k;
            }
        arr2[y]=sum;
        sum=0;
        y++;
        }
        k++;
    }
    int temp;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<y;j++)
        {
           if(arr2[i]<arr2[j])
           {
                temp=arr2[j];
                arr2[j]=arr2[i];
                arr2[i]=temp;
           }
        }
    }
    cout<<arr2[y-1]<<" ";
    return 0;
}