#include<iostream>
using namespace std;


class Person{
    private:
        string name;
        int age;

    public:
        Person(): name(""), age(0){
            cout<< "Person Parameterless constructor is called!" << endl;
        };
        Person(string name, int age): name(name), age(age){
            cout<< "Person Parameterd constructor is called!" << endl;
        };

        void showRecord()
        {   
            cout<<"Name : "<<name<<endl; 
            cout<<"Age : "<<age<<endl; 
        }

        ~Person(){
            cout<< "Destructor of person is called!" << endl;
        }
};

class Employee: public Person{

    private:
        int empId;
        float salary;
    
    public:
        Employee():empId(0), salary(0){
            cout<< "Employee Parameterless constructor is called!" << endl;
        };
        Employee(string name, int age,int empId, float salary): Person(name, age){
            
            cout<< "Employee Parameterd constructor is called!" << endl;
            
            // Person(name, age);
            this->empId = empId;
            this->salary = salary;
            cout<< "Employee Parameterd constructor is called!" << endl;
        }
        void displayRecord( )
        {
            // Person :: showRecord();
            cout<<"Empid : "<<empId<<endl; 
            cout<<"Salary : "<<salary<<endl; 
        }

        ~Employee(){
            cout<< "Destructure of Employee is called!" << endl;
        }
     

};

int main()
{   
    //Object creation without parametes
    // Employee employee;
    // employee.displayRecord();
    // employee.showRecord();

    //Object creation with parametes
    // Employee employee("Atharva", 22, 1234, 250000);
    // employee.displayRecord();
    // employee.showRecord();

    //Object creation with pointer of the class and destructures;
    Employee *emp = new Employee("Atharva", 22, 1234, 250000);
    emp->displayRecord();
    emp->showRecord();
    delete(emp);
    emp = NULL;

    //Base class methods calling in derived class's methods;
    // Employee *emp = new Employee("Atharva", 22, 1234, 250000);
    // emp->displayRecord();
    // delete(emp);
    // emp = NULL;


    return 0;
}
