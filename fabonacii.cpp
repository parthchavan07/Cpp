#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=1,sum2=0,count=0;
    cin>>n;
    cout<<i<<endl;
    cout<<sum<<endl;
    while(sum2<n)
    {
        sum2=i+sum;
        i=sum;
        sum=sum2;
        cout<<sum2<<endl;
        count++;
    }
}