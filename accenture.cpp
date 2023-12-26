#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,count=0;
	cin>>n;
	int u;
	cin>>u;
	int s;
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	u=n*u;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		count++;
		if(sum>=u)
		{
			cout<<count;
			return 0;
		}
	}
	return 0;
}