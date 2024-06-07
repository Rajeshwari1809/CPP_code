/*Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. 
Create an abstract class Employee with attributes like name and employee ID.
 Derive concrete classes like HourlyEmployee and SalariedEmployee. 
 Define abstract methods for calculating pay in the base class and implement them in the derived classes.*/

 #include<iostream>
 using namespace std;

 class Employee{
    private :
    string name;
    int ID;

    public:
    Employee(string name,int ID)
    {
        this->name=name;
        this->ID=ID;
    }
    virtual void calculatePay()=0;


 };

 class HourlyEmployee: public Employee
 {
    private:
    int hrsWorked;
    int rate=500;
    
    public:
    HourlyEmployee(string name,int id,int hrsWorked):Employee(name,id)
    {
        this->hrsWorked=hrsWorked;
    }

    void calculatePay()
    {
        cout<<"Hourly Employee Salary: "<<(hrsWorked*rate)<<endl;
    }
 };
 class SalariedEmployee: public Employee
 {
    private:
    double basicSalary=20000;
    double bonus=10000;
    ;
    
    public:
    SalariedEmployee(string name,int id):Employee(name,id)
    {
       
    }

    void calculatePay()
    {
        cout<<"Salaried Employee Salary: "<<(basicSalary+bonus)<<endl;
    }
 };
 int main()
 {
    HourlyEmployee E("Tejas",123,120);
    E.calculatePay();

    SalariedEmployee S("Rahul",123);
    S.calculatePay();

    
    
    return 0;
 }