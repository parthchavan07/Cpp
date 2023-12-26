#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem,x=0,i=0;
    cin>>n;
    while(n!=0)
    {
       rem=n%10;
       n=n/10;
       x=x+rem*pow(2,i);
       ++i;
    }
    cout<<x;
}