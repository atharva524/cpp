#include<iostream>

using namespace std; 

class Base 
{
    public: 
    Base ( void )
    {
        cout<<"Base ( void )"<<endl; 
    }
    virtual ~Base(void)
    {
        cout<<"~Base(void)"<<endl; 
    }
}; 
class Derived : public Base 
{
    public: 
    Derived( void )
    {
        cout<<"Derived( void )"<<endl; 
    }
    ~Derived( void )
    {
        cout<<" ~Derived( void )"<<endl; 
    }

}; 

int main(int argc, char const *argv[])
{
    Base *ptrBase = new Derived( ); 
    delete ptrBase; 
    return 0;
}

int main2(int argc, char const *argv[])
{
    Derived *ptrDerived = new Derived( ); 
    delete ptrDerived; 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Base *ptrBase = new Base( ); 
    delete ptrBase; 
    return 0;
}
