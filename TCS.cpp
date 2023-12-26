#include<iostream>
#include<string>
using namespace  std;
int main()
{
    string s,e;
    cin>>s>>e;
    string arr[8]={"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    int arr2[8]={800,600,750,900,1400,1200,1100,1500};
    int temp,temp2,sum=0,x=0,sum3=0,sum2=0,res;
    for(int i=0;i<8;i++)
    {
        if(s==arr[i])
            temp=i;
        else if(e==arr[i])
            temp2=i;
    }
    if(s==e)
    {
        cout<<"INVALID OUTPUT";
        return 0;
    }
    else if(temp<temp2)
    {
    for(int i=0;i<8;i++)
    {
       if(i==temp2)
       {
        break;
       }  
       else if(i==temp+x)
       {
        sum=sum+arr2[i];
        x++;
       }
    }
        res=sum/100*0.5;
        cout<<res<<" INR";
        return 0;
    }
    else 
    {
         for(int i=0;i<8;i++)
         {
             if(i==temp+x)
             {
                sum=sum+arr2[i];
                x++;
             }
         }
         
         for(int i=0;i<temp2;i++)
         {
            sum2=sum2+arr2[i];
         }
    }
         sum3=sum+sum2;
         res=sum3/100*0.5;
         cout<<res<<" INR";
    return 0;
}