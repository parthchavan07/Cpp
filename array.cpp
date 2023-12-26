#include<iostream>
using namespace std;
int main()
{
    int arr[3]={3,3,3};
    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>=2)
        {
            cout<<arr[i];
            break;
        }
        count=0;
    }
    return 0;
}