#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c;
    int arr[100][100];
    int arr2[100];
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        arr2[i]=c;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr2[x];j++)
        {
           cin>>arr[i][j];
        }
        x++;
    }
    x=0;
    int lar=0,sem=1;;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr2[x];j++)
        {
           if(lar<arr[i][j])
           {
            lar=arr[i][j];
           }
        }
        cout<<"Maximum marks in number "<<sem<<" sem : "<<lar;
        lar=0;
        cout<<endl;
        x++;
        sem++;
    }
}