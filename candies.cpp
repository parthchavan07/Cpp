#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x,y;
    cin>>x;
    int s=0,count=0;
    for(int i=0;i<n;i++)
    {
        y=arr[i]+x;
        for(int j=0;j<n;j++)
        {
            if(y>=arr[j])
            {
                count++;
            }
        }
        if(count==n)
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        }
        count=0;
        y=0;
    }
}