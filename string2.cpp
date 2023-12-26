#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    string name2;
    cin>>name2;
    string name3=name+name2;
    cout<<name3;
    return 0;
}