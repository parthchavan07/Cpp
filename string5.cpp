#include<iostream>
using namespace std;
int main()
    {
       string name;
       getline(cin,name);
       int count=1;
       for(int i=0;i<=name.length();i++)
       {
           if(name[i]==' ')
           {
            count++;
           }       
       }
       int arr[count];
       int x=0;
       for(int i=0;i<=name.length();i++)
       {
           if(name[i]==' ')
           {
            for(int j=0+x;j<count;j++)
            {
              arr[j]=i;
              x++;
              break;
            }
           }      
       }
       for(int i=count-x;i>=0;i--)
       {
         x=0;
          for(int j=0;j<=name.length();j++)
          {
          if(j==arr[i]+x+1)
            {
              if(name[j]==' ')
              { 
                break;
              }
              cout<<name[j];
              x++;
            }
          }   
       }
       cout<<" ";
       for(int i=0;i<name.length();i++)
       {
          if(name[i]==' ')
          break;
          cout<<name[i];
       }

       return 0;
    }