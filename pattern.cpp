#include<iostream>
using namespace std;
int main()
{
   int i=0,sum=0,j=0;
   int n;
   cin>>n;
   sum=n/2;
   sum=sum*2+n;
   int x=n-1;
   for(i=0;i<sum;i++)
   {
   	if(i==x)
   	{ cout<<"*";
   	}
   	else
   	{
   		cout<<" ";
   	}
   }
   cout<<endl;
   int count=1;
   int p=x;
   while(count<=n-2)
   {
   for(j=0;j<sum;j++)
   {
      if(j==x-1 || j==p+1)
      {
      	cout<<"*";
      }
      else
      {
      	cout<<" ";
      }
   }
        count++;
        x--;
        p++;
        cout<<endl;
   }
   if(n%2!=0)
   {
   for(i=0;i<sum;i++)
   {  
   cout<<"*";
   }
   }
   else{
    for(i=0;i<sum-1;i++)
   {  
   cout<<"*";
   }
   }
    return 0;
}