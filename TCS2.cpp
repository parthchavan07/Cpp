#include<iostream>
#include<string>
using namespace  std;
int main()
{
    string name;
    getline(cin,name);
    string name2;
    for(int i=0;i<name.length();i++)
    {
            if(name[i]==' ')
                cout<<" ";      
            name2=name[i]+1;
            cout<<name2;
    }
    for(int i=0;i<name2.length();i++)
    {
        if(name2[i]==' ')
        {
            cout<<" ";
        }
        else if(name[i]==33)
        {
            cout<<"";
        }
        cout<<name2;
    }
    return 0;
}