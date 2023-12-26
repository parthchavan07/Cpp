#include<iostream>
using namespace std;
int main()
{
    int n,sum,x=0;
    cin>>n;
    int p;
    cin>>p;
    while(n>0)
    {
        sum=n%10;
        x=sum+x;
        n=n/10;
    }
    sum=0;
    for(int i=0;i<p;i++)
    {
        sum=sum+x;
    }
    x=0;
    while(sum>0)
    {
        n=sum%10;
        x=n+x;
        sum=sum/10;
    }
    cout<<x;
    return 0;
}