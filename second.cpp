#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    int n;
    cout<<"enter age :";
    cin>>n;
    cout<<name<<endl;
    cout<<n<<"\n";
    cout<<"your name is "<<name<<" age is " <<n<<endl;
    return 0;
}