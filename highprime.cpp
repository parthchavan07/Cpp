#include<iostream>
using namespace std;
int main()
{
    int s,count=0,count2=0;
    cin>>s;
    int e,res;
    cin>>e;
    for(int i=s;i<=e;i++)
    {
        for(int j=1;j<=e;j++)
        {
            res=i%j;
            if(res==0)
            {
               count++;
            }
        }
        if(count==2)
        {
            count2++;
        }
        count=0;
    }
    count=0;
    int arr[count2];
    int sum=0,x=0;
    for(int i=s;i<=e;i++)
    {
        for(int j=1;j<=e;j++)
        {
            if(i%j==0)
            {
               count++;
            }
        }
        if(count==2)
        {
            for(int k=0+x;k<count2;k++)
            {
                arr[k]=i;
                x++;
                break;
            }
        }
        count=0;
    }
    sum=arr[0]+arr[count2-1];
    cout<<sum;
    return 0;
}