#include<iostream> 
using namespace std;


class Person 
{
    private: 
    string name; 
    int age; 
    public: 
    Person( void ) : name("") , age(0)
    {   
        cout<<"Person( void )"<<endl; 
    }
    Person(string name , int age) : name(name) , age(age)
    { 
        cout<<"Person(string name , int age)"<<endl; 
    }; 
    void showRecord(void )
    {
        cout<<"Name : "<<name<<endl; 
        cout<<"Age : "<<age<<endl; 
    }
    ~Person( void )
    {
        cout<<"~Person( void )"<<endl; 
    }
}; 
class Employee : public Person 
{
    private: 
    int empid; 
    double salary; 
    public: 
    Employee( void ) : empid(0) , salary(0.0)
    {   
        cout<<"Employee( void )"<<endl; 
    } 
    Employee(string name , int age , int empid , double salary) : empid(empid) , salary(salary)
    {   
        cout<<"Employee(string name , int age , int empid , double salary) "<<endl; 
    }
    void displayRecord( void )
    {
        cout<<"Empid : "<<empid<<endl; 
        cout<<"Salary : "<<salary<<endl; 
    }
    ~Employee( void )
    {
        cout<<"~Employee( void )"<<endl; 
    }
}; 

int main(int argc, char const *argv[])
{
    Employee *emp = new Employee("Ketan",31,1,1000.00); 
    emp->displayRecord( ); 
    delete emp; 
    emp = NULL; 
    return 0;
}

int main3()
{
    Person *p = new Person("Aditya",30); 
    p->showRecord( ); 
    return 0;
}

int main2(int argc, char const *argv[])
{
    Employee *emp = new Employee( ); 
    emp->displayRecord( ); //emp->Employee::displayRecord(); 
    return 0;                   
}

int main1()
{
    Person *p = new Person( ); 
    p->showRecord( ); 
    return 0;
}
