#include<iostream>
using namespace std;
void func(int a[],int b)
{
  int arr2[b],x=0;  
  for(int i=0;i<b;i++)
  {
    for(int j=i+1;j<b-1;j++)
    {
        if(a[i]==a[j])
        {
            arr2[x]=1;
            x++;
        }
    }
  }
  int z=0;
  for(int i=x+1;i<b+x+1;i++)
  {
    if(a[z]!=1)
    {
        arr2[i]=a[z];
    }
    z++;
  }
  for(int i=0;i<b;i++)
  {
    cout<<arr2[i]<<" ";
  }
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr3[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    func(arr,n);
}