#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,sum2=0;
    cin>>n;
    int k;
    cin>>k;
    int j;
    cin>>j;
    int m;
    cin>>m;
    int p;
    cin>>p;
    while(m>0)
    {
       sum=m-k;
       m=sum;
       n--;
    }
       while(p>0)
       {
         sum2=p-j;
         p=sum2;
         n--;
       }
       cout<<"Number of monkeys left on tree:"<<n;
       return 0;
}
