#include<iostream>
using namespace std;
int apti(int a,int b)
{
    if(b==a)
    {
       b=1;
       return b; 
    }
    else 
    {
        return b;
    }
}
int main()
{
    int r,c,arr2[100];
    cin>>r;
    int arr[100][100],check,count=0;
    int z=0,par[100][100],p=0;
    for(int i=0;i<r;i++)
    {
        cin>>c;
        arr2[i]=c;
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
        cin>>check;
        for(int l=0;l<c;l++)
        {
            apti(check,arr[i][l]);
        }
        for(int v=0;v<c;v++)
        {
            par[z][p]=apti(check,arr[i][v]);
            p++;
        }
        z++;
        p=0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<arr2[i];j++)
        {
            if(par[i][j]==1)
            {
                cout<<par[i][j]<<" ";
            }
        }
        for(int k=0;k<arr2[i];k++)
        {
            if(par[i][k]!=1)
            {
                cout<<par[i][k]<<" ";
            }
        }    
        cout<<endl;
    }
}
