#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int e;
    cin>>e;
    int x=i+e;
    float arr[x];
    float sum=0,sum2=0,sum3;
    for(int j=0;j<x;j++)
    {
        cin>>arr[j];
    }
    for(int k=0;k<i;k++)
    {
        sum=sum+arr[k];
    }
    sum=sum*18;
    for(int l=i;l<x;l++)
    {
        sum2=sum2+arr[l];
    }
    sum2=sum2*12;
    sum3=sum+sum2;
    cout<<sum3;
    return 0;
}