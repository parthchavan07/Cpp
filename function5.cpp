#include<iostream>
using namespace std;
int loop(int a)
{
    int temp;
   for(int i=0;i<a;i++)
   {
      temp=i;
      return temp;
   }
}
int main()
{
    int n;
    cin>>n;
    loop(n);
    for(int i=0;i<n;i++)
    {
        cout<<loop(n)<<" ";
    }
}