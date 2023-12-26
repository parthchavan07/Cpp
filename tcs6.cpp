#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
   int p;
   cin>>p;
   int t;
   cin>>t;
   int in;
   int pi;
   cin>>in;
   float r,x,y,z,sum=0,sum2=0;
   for(int i=0;i<in;i++)
   {
      cin>>pi>>r;
      x=p*(r);
      y=pow((1+r),pi*12);
      z=(x)/((1-1/y));
      sum=sum+z;
   } 
   cin>>in;
    for(int i=0;i<in;i++)
   {
      cin>>pi>>r;
      x=p*(r);
      y=pow((1+r),pi*12);
      z=(x)/((1-1/y));
      sum2=sum2+z;
   }
   if(sum < sum2)
   cout<<"Bank A";
   else
   cout<<"Bank B";
}