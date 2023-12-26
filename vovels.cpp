#include<iostream>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    for(int i=0;i<name.length();i++)
    {
        if(name[i]!='e'&& name[i]!='a'&& name[i]!='i'&& name[i]!='o'&& name[i]!='u')
        {
            cout<<name[i];
        }
    }
    return 0;
}