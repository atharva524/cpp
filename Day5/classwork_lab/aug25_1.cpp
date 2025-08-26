#include<iostream>
using namespace std;


class Person{
    private:
        string name;
        int age;

    public:
        Person(): name(""), age(0){};
        Person(string name, int age): name(name), age(age){};

        void showRecord()
        {   
            cout<<"Name : "<<name<<endl; 
            cout<<"Age : "<<age<<endl; 
        }

};

class Employee: public Person{

    private:
        int empId;
        float salary;
    
    public:
        Employee():empId(0), salary(0){};
        Employee(string name, int age,int empId, float salary){
            this->empId = empId;
            this->salary = salary;
        }
        void displayRecord( )
        {
            cout<<"Empid : "<<empId<<endl; 
            cout<<"Salary : "<<salary<<endl; 
        }
     

};

int main()
{
    // Employee employee;
    // employee.displayRecord();
    // employee.showRecord();


    Employee employee("Atharva", 22, 1234, 250000);
    employee.displayRecord();
    employee.showRecord();

    return 0;
}
