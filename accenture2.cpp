#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1,sum2=0;
    cin>>n;
    int m;
    cin>>m;
    while(n*i<=m)
    {
      sum=sum+(n*i);
      i++;
    }
    i=1;
    while(i<=m)
    {
        sum2=sum2+i;
        i++;
    }
    sum2=sum2-sum*2;
    cout<<sum2;
}