#include<iostream>
using namespace std;
string binary(int);
int main()
{
    int n;
    cin>>n;
    cout<<binary(n);
}
string binary(int b)
{
   int arr2[7]={64,32,16,8,4,2,1};
   int sum;
   string y="\0",x="1",z="0";
   for(int i=0;i<7;i++)
   {
     if(b-arr2[i]>=0)
     { 
        b=b-arr2[i]; 
        y=y+x;
     }
     else if(b-arr2[i]<0)
     {
        y=y+z;
     } 
   } 
   return y;
}
