/*Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exit*/

#include<iostream>
#include<string.h>
using namespace std;
class Employee{

    private:
      int id;
      string name;
      int deptId ;
     
     protected:
     double basicSalary;

     public:
     Employee()
     {
        id=0;
        name="\0";
        deptId=0;
        basicSalary=0.00;
     }

     Employee(int id,string name,int deptId,double basicSalary)
     {
        this->id=id;
        this->name=name;
        this->deptId=deptId;
        this->basicSalary=basicSalary;
     }

     virtual double computeNetSalary()
     {
        return basicSalary;
     }
     virtual void display()
	{
			cout<<"EmpID: "<<id<<"   "<<"EmpName: "<<name<<"    "<<"DeptID: "<<deptId<<"   "<<"Basic Salary: "<<basicSalary<<endl;
				
	}
     
};
class Mgr:public Employee{
    private:
   double perfBonus;

   public:
   Mgr()
   {
    perfBonus=0;
   }
   Mgr(int id,string name,int deptId,double basicSalary,double perfBonus):Employee(id,name,deptId,basicSalary)
   {
    this->perfBonus=perfBonus;
   }
   double computeNetSalary()
    {
        return (basicSalary + perfBonus);
    }
    void display()
    {
        Employee::display();
        cout<<"PerfBonus: "<<perfBonus<<endl;
    }



};
class Worker:public Employee{
    private:
    int hoursWorked;
    int hourlyRate;

    public:
    Worker()
    {
            hoursWorked=0;
            hourlyRate=0;
    }
    Worker(int id,string name,int deptId,double basicSalary,int hoursWorked,int hourlyRate):Employee(id,name,deptId,basicSalary)
    {
        this->hoursWorked=hoursWorked;
        this->hourlyRate=hourlyRate;
    }
     int getHourlyRate()
    {
        return this->hourlyRate;
    }
    double computeNetSalary()
    {
        return basicSalary+(hoursWorked*hourlyRate);
    }
    void display()
    {
        Employee::display();
        cout<<" hoursWorked: "<< hoursWorked<<"hourlyRate: "<<hourlyRate<<endl;
    }
   

};

int main()
{
        int id;
        string name;
        int deptId;
        double basicSalary;
        double perfBonus;

        /*int count=3;
        cout<<"How many manager details you want to add"<<endl;
        cin>>count;
             
    
            while(count!=0)
        {
            if(count==3)
            {
            Mgr m1(id,name,deptId,basicSalary,perfBonus);
            e[0]=&m1;
            }
            else if(count==2)
            {
               Mgr m2(id,name,deptId,basicSalary,perfBonus); 
               e[1]=&m2;
            }
             else if(count==1)
            {
               Mgr m3(id,name,deptId,basicSalary,perfBonus); 
               e[2]=&m3;
            }
            count--;
        }*/

            cout<<"Enter Manager 1 details: "<<endl;
            cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter perfBonus:"<<endl;
            cin>>perfBonus;

            Mgr m1(id,name,deptId,basicSalary,perfBonus);
  
       cout<<"Enter Manager 2 details: "<<endl;
            cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter perfBonus:"<<endl;
            cin>>perfBonus;

            Mgr m2(id,name,deptId,basicSalary,perfBonus);
    
        cout<<"Enter Manager 3 details: "<<endl;
            cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter perfBonus:"<<endl;
            cin>>perfBonus;

            Mgr m3(id,name,deptId,basicSalary,perfBonus);

            int hoursWorked;
            int hourlyRate;

         cout<<"Enter Worker 1 details: "<<endl;
            cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter hoursWorked:"<<endl;
            cin>>hoursWorked;

            cout<<"hourlyRate:"<<endl;
            cin>>hourlyRate;

            Worker wr1(id,name,deptId,basicSalary,hoursWorked,hourlyRate);
   cout<<"Enter Worker 2 details: "<<endl;
            cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter hoursWorked:"<<endl;
            cin>>hoursWorked;

            cout<<"hourlyRate:"<<endl;
            cin>>hourlyRate;

            Worker wr2(id,name,deptId,basicSalary,hoursWorked,hourlyRate);
    
 cout<<"Enter Worker 3 details: "<<endl;
           cout<<"ENter ID:"<<endl;
            cin>>id;

            cout<<"Enter Name:"<<endl;
            cin>>name;

            cout<<"ENter deptID:"<<endl;
            cin>>deptId;

            cout<<"ENter basicSalary:"<<endl;
            cin>>basicSalary;

            cout<<"ENter hoursWorked:"<<endl;
            cin>>hoursWorked;

            cout<<"hourlyRate:"<<endl;
            cin>>hourlyRate;

            Worker wr3(id,name,deptId,basicSalary,hoursWorked,hourlyRate);
            
    int choice;
    do{
    cout<<"Enter your choice: \n 1.Hire Manager\n2. Hire Worker\n3. Display information of all employees net salary\n4. Exit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        Employee* e[3];
            e[0]=&m1;
            e[1]=&m2;
            e[2]=&m3;
        
        cout<<"Manager Details: "<<endl;
        for(int i=0;i<3;i++)
        {
            e[i]->display();
        }

        break;

       case 2:
            Employee* e1[3];
            e1[0]=&wr1;
           e1[1]=&wr2;
           e1[2]=&wr3;
             
            cout<<"Worker Details: "<<endl;
        for(int i=0;i<3;i++)
        {
            e1[i]->display();
        }
        break;

        case 3:
         
        Employee* e2[3];
        e2[0]=&m1;
        e2[1]=&m2;
        e2[2]=&m3;
        cout<<"Manager Salary: "<<endl;
        for(int i=0;i<3;i++)
        {
           cout<<"Net Salary of Manager ("<<i+1<<") : "<<e2[i]->computeNetSalary();
        }

        Employee* e3[3];
        e3[0]=&wr1;
        e3[1]=&wr2;
        e3[2]=&wr3;
             
        cout<<"Worker Salary: "<<endl;
        for(int i=0;i<1;i++)
        {
            cout<<"Net Salary of Worker ("<<i+1<<") : "<<e3[i]->computeNetSalary();
        }
        break;


   }
    }while(choice!=4);
return 0;
}