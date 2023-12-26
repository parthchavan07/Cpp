#include<iostream>
using namespace std;
class Employee
{
   public:                //access speciers
   int id;                //attribute or data member
   string firstName;      //attribute or data member
   string lastName;       //attribute or data member
   Employee();            //default constructor declaration
   string getfullname()
   {
    return firstName + " " + lastName;
   }
   void displaydetails();
};
Employee::Employee()       //default constructor defination
   {
    cout<<"Constructor Created"<<endl;
   }
void Employee::displaydetails(){
    cout<<"ID :"<<id << endl << getfullname()<<endl;
};
int main()
{
    Employee emp1;
    emp1.id=1;
    emp1.firstName="parth";
    emp1.lastName="chavan";
    emp1.displaydetails();
    Employee emp2;
    emp2.id=2;
    emp2.firstName="saee";
    emp2.lastName="chavan";
    emp2.displaydetails();
    return 0;
}