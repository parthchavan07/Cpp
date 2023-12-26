#include<iostream>
using namespace std;
int prime(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    if(prime(n)==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}