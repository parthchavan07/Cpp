#include<iostream>
using namespace std;
int num(int n1 , int n2)
{
    int temp[100],x=0,temp2,count=0,y=0;
    for(int i=n1;i<=n2;i++)
    {
        temp2=i;
        while(temp2>0)
        {
            temp[x]=temp2 % 10;
            x++;
            temp2=temp2/10;
        }
        for(int j=0;j<x;j++)
        {
            for(int k=j+1;k<x;k++)
            {
                if(temp[j]==temp[k])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
           y++;
        }
        count=0;
        x=0;
    }
     return y;
   
}
 int main()
 {
    int n1,n2;
    cin>>n1>>n2;
    cout<<num(n1,n2);  
    return 0;
 }