#include<iostream> 

using namespace std; 

class Base 
{
    int num1; 
    int num2; 
    public: 
    Base( void )
    {   }
    void setNum1( int num1)
    {
        this->num1 = num1; 
    }
    void setNum2( int num2)
    {
        this->num2 = num2; 
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl;  
        cout<<"num2 : "<<num2<<endl;  
    }
}; 
class Derived : public Base 
{
    private: 
    int num3; 
    public: 
    Derived( void )
    {   }
    void setNum3( int num3)
    {
        this->num3 = num3; 
    }
    void printRecord( void )
    {
        Base::printRecord( ); 
        cout<<"num3 : "<<num3<<endl;  
    }
}; 
int main(int argc, char const *argv[])
{
    Base *ptrBase = new Base( );
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20);
    //Derived *ptrDerived = (Derived*)ptrBase;// downcasting 
    Derived *ptrDerived = static_cast<Derived*>(ptrBase);// downcasting 
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( );     
    return 0;
}
int main3(int argc, char const *argv[])
{
    Base *ptrBase = new Derived( ); // upcasting  
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20);
    //Derived *ptrDerived = (Derived*)ptrBase;// downcasting 
    Derived *ptrDerived = static_cast<Derived*>(ptrBase);// downcasting 
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( );     
    return 0;
}

int main2(int argc, char const *argv[])
{
    Derived *ptrDerived = new Derived(); 
    ptrDerived->setNum1(10); 
    ptrDerived->setNum2(20);
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( );  
    return 0;
}

int main1(int argc, char const *argv[])
{
    Base *ptrBase = new Base( );
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20);
    ptrBase->printRecord( );   
    return 0;
}
