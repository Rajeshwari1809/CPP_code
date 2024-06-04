/*Problem Statement: Build a system for managing employees. 
Create a base class Employee with attributes such as name, employee ID, and salary. 
Then, derive classes like Manager and Developer, each with its own attributes and methods. 
Implement a common method, like calculate_salary(), in the base class.*/

#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int id;
    double sal;

    public:
    Employee( string name,int id,double sal)
    {
        this->name=name;
        this->id=id;
        this->sal=sal;
    }
    virtual void displayInfo()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<sal<<endl;
    }
    virtual void calSal(){
        cout<<"Salary: "<<sal<<endl;
    }

};
class Manager:public Employee{
    private:
    string tName;

    public:
    Manager(string name,int id,double sal,string tName):Employee(name,id,sal)
    {
       this->tName=tName;
    }
    void isManaging()
    {
        cout<<"Manager is managing a team"<<endl;
    }
    void displayInfo()
    {
        Employee::displayInfo();
        cout<<tName<<endl;
    }
    

};
class Developer:public Employee{
    private:
    string specialisation;

    public:
    Developer(string name,int id,double sal,string specialisation):Employee(name,id,sal)
    {
       this->specialisation=specialisation;
    }
    void isDebugging()
    {
        cout<<"Developer is debugging a code"<<endl;
    }

    void isCoding()
    {
        cout<<"Developer is coding"<<endl;
    }
    void displayInfo()
    {
        Employee::displayInfo();
        cout<<specialisation<<endl;
    }

};


int main()
{
    Manager M1("Mr.Gupta",123,80000,"ITDept");
    M1.displayInfo();
    M1.isManaging();
    M1.calSal();

    Developer D1("Supriya",456,60000,"FullStack");
    D1.displayInfo();
    D1.isCoding();
    D1.isDebugging();
    D1.calSal();

    return 0;
}