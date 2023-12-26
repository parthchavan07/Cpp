#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,l,k;
    cin>>l>>k;
    x=(l/k)*100;
    cout<<setprecision(4)<<x<<endl;
    l=l*0.2642;
    k=k*0.6214;
    x=k/l;
    cout<<x;
}