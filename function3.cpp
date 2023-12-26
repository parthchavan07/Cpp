#include<iostream>
using namespace std;
int large(int a)
{
    int arr[a],count=0,temp;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(arr[i]>=arr[j])
            {
               count++;
            }
        }
        if(count==a)
        {
            temp=arr[i];
        }
        count=0;
    }
    return temp;
}
int main()
{
    int n;
    cin>>n;
    cout<<large(n);
}