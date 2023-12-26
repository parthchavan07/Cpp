#include<iostream>
using namespace std;
int main()
{
    int p,n[4];
    char arr[5]={'A','B','C','D','E'};
    int arr2[5]={127,191,223,239,255};
    string arr3[4];
    int arr5[8]={128,64,32,16,8,4,2,1};
    cout<<"Enter 1 for decimal IP address"<<endl<<"OR"<<endl<<"Enter 2 for binary IP address"<<endl;
    cin>>p;
    if(p==1)
    {
        cout<<"Enter your decimal IP address"<<endl;
        for(int i=0;i<4;i++)
        {
            cin>>n[i];
            if(n[i]>255)
            {
                cout<<"Enter valid number";
                return 0;
            }
        }
        for(int j=0;j<5;j++)
        {
            if(n[0]<=arr2[j])
            {
                cout<<"It belongs to"<<" "<<arr[j]<<" "<<"Class";
                return 0;
            }
        } 
    }
    int sum=0;
    string x="\0";
    if(p==2)
    {
        cout<<"Enter your binary IP address"<<endl;
        for(int i=0;i<4;i++)
        {
            cin>>arr3[i];
        }
        for(int j=0;j<4;j++)
        {
            x=arr3[j];
            for(int k=0;k<8;k++)
            {
                if(x[k]=='1')
                {
                    sum=sum+arr5[k];
                }
            }
        for(int j=0;j<5;j++)
        {
            if(sum<=arr2[j])
            {
                cout<<"It belongs to"<<" "<<arr[j]<<" "<<"Class";
                return 0;
            }
        }    
        }
    }
}