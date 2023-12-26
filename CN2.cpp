#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,y,z=0,a=0;
    char arr[5]={'A','B','C','D','E'};
    int arr2[5]={127,191,223,239,255};
    string p,x="\0";
    cout<<"Enter 1 for decimal IP address"<<endl<<"OR"<<endl<<"Enter 2 for binary IP address"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"Enter decimal IP address"<<endl;
        cin>>p;
        for(int i=0;p[i]!='.';i++)
        {
            if(p[i]>=48 && p[i]<=57)
            {
                x=x+p[i];
            } 
        }
        int num=stoi(x);
        for(int j=0;j<5;j++)
        {
            if(num<=arr2[j])
            {
                cout<<"It belongs to"<<" "<<arr[j]<<" "<<"Class";
                return 0;
            }
        }
    }
    if(n==2)
    {
       cout<<"Enter binary IP address"<<endl;
       cin>>p;
       for(int k=0;p[k]!='.';k++)
       {
            if(p[k]=='0' || p[k]=='1')
            {
                x=x+p[k];
            }
       }
       int num=stoi(x);
       while(num!=0)
       {
        y=num%10;
        num=num/10;
        z=z+y*pow(2,a);
        a++;
       }
       for(int j=0;j<5;j++)
        {
            if(z<=arr2[j])
            {
                cout<<"It belongs to"<<" "<<arr[j]<<" "<<"Class";
                return 0;
            }
        } 
    }   
}