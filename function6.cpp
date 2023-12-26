#include<iostream>
using namespace std;
int array(int a)
{
    a=a+1;
    return a;
}
int main()
{
    int arr[10];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    array(arr[0]);
    int arr2[10];
    for(int i=0;i<3;i++)
    {
        arr2[i]=array(arr[i]);
        cout<<arr2[i]<<" ";
    }
}