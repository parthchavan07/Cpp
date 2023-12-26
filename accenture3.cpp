#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2,sum,count=0,arr[100],x=0,y=0,k=0;
    cin>>num1>>num2;
    while(num1>0)
    {
        sum=num1%10;
        x=num2%10;
        sum=sum+x+k;
        k=0;
        if(sum>=10)
        {
            count++;
            k=1;
        }
        num1=num1/10;
        num2=num2/10;
    }
    cout<<count;
    return 0;
}