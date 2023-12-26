#include<iostream>
using namespace std;
int main()
{
    int n,y=1,z=2;
    cin>>n;
    int k=(n*2)-1;
    for(int i=1;i<=(n*2)-1;i++)
    {
        for(int j=1;j<=(n*2)-1;j++)
        {
            if(j==y || j==k)
            {
                if(y>n)
                {
                    cout<<y-z;
                }
                else
                {
                cout<<y;
                }
            }
            else
            {
                if(j==n)
                {
                    cout<<" ";
                }
                cout<<"  ";
            }
        }
        if(y>n)
        {
           z=z+2;
        }
        cout<<endl;
        y++;
        k--;
    }
}