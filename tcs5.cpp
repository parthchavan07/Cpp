#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cin>>name;
    string y;
    cin>>y;
    int count=1,sum=0;
    if(y=="N" | y=="n")
    {
       cout<<"total Members:"<<"1"<<endl;
       cout<<"Comission Details"<<endl;
       cout<<name<<":250";
    }
    else
    {
    string child;
    cin>>child;
    for(int i=0;i<child.length();i++)
    {
        if(child[i]==44)
        {
            count++;
        }
    }
    cout<<"total Members:"<<count+1<<endl;
    cout<<"Comission Details"<<endl;
    cout<<name<<":"<<500*count<<endl;
    for(int i=0;i<child.length();i++)
    {
        if(child[i]!=',')
        {
            cout<<child[i];
            if(i==child.length())
            {
                cout<<":250"<<endl;
            }
        }
        else if(child[i]!=',')
        {
            cout<<child[i];
        }
        else
        {
            cout<<":250"<<endl;
        }
    }
    cout<<":250";
    }
    return 0;
}