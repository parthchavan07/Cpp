#include<iostream>
using namespace std;
int main()
{
    int n,sum,x=1;
    cin>>n;
    while(n>0)
    {
        sum=n%10;
        x=sum*x;
        n=n/10;
    }
    cout<<x<<endl;
    return 0;
}