#include<iostream>
using namespace std;
int main()
{
    int r,c,arr2[100];
    cin>>r;
    int arr[100][100],check,count=0;
    int z=0,temp;
    for(int i=0;i<r;i++)
    {
        cin>>c;
        arr2[i]=c;
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
        cin>>check;
        for(int k=0;k<c;k++)
        {
            if(arr[i][k]==check)
            {
                arr[i][k]=1;
                count++;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<arr2[i];j++)
        {
            if(arr[i][j]==1)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        for(int k=0;k<arr2[i];k++)
        {
            if(arr[i][k]!=1)
            {
                cout<<arr[i][k]<<" ";
            }
        }    
        cout<<endl;
    }
}