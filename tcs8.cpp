#include<iostream>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int p,sum,count=0;
    cin>>p;
    if(n=="mon")
    {
        sum=p-6;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="tues")
    {
        sum=p-5;
        while(sum>0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="wed")
    {
        sum=p-4;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="thurs")
    {
        sum=p-3;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="fri")
    {
        sum=p-2;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="sat")
    {
        sum=p-1;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
    else if(n=="sun")
    {
        sum=p-0;
        while(sum>=0)
        {
            sum=sum-7;
            count++;
        }
        cout<<count;
    }
}