#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int count=0,res=0;
    while(n!=0)
    {
        x=n%10;
        for(int i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                count++;
            }
            if(x==1)
            {
                res=res+1;
                break;
            }
        }
        if(count==2)
        {
            res=res+x;
        }
        n=n/10;
        count=0;
    }
    cout<<res;
}