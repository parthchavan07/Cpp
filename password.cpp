#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int count=0;
	int n=0,l=0,x=0;
	if(s.length()<4)
	{
		cout<<"0";
		return 0;
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<=90 && s[i]>=65)
		{
			count++;
		}
		else if(s[i]>=48 && s[i]<=57)
		{
			n++;
		}
		else if(s[i]!=' ')
		{
			l++;
		}
	}
		 if(s[0]>=48 && s[0]<=57)
		{
			x++;
		}
	if(count>0 && n>0 && l==s.length()-n-count && x==0)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}