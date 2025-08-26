#include<iostream> 

using namespace std; 

class A 
{
    public: 
    void sum( void ); 
    void sub( void ); 
    void mult( void ); 
    void div( void ); 
}; 
class B 
{
    private: 
    int num1; 
    int num2;
    public: 
    B(int num1 , int num2)
    {
        this->num1 = num1; 
        this->num2 = num2; 
    } 
    // friend void A ::  sum( void ); 
    // friend void A :: sub( void ); 
    // friend void A ::  mult( void );
    // friend void A ::  div( void ); 
      friend class A;  
}; 
void A ::  sum( void )  
{
    B b(20,10); 
    int res = b.num1 + b.num2; 
    cout<<"res : "<<res<<endl; 
}
void A :: sub( void ) 
{
    
    B b(20,10); 
    int res = b.num1 - b.num2; 
    cout<<"res : "<<res<<endl; 
}
void A ::  mult( void ) 
{
    B b(20,10); 
    int res = b.num1 * b.num2; 
    cout<<"res : "<<res<<endl; 
}
void A ::  div( void )
{
    B b(20,10); 
    int res = b.num1  / b.num2; 
    cout<<"res : "<<res<<endl; 
}
int main(int argc, char const *argv[])
{
    A obj; 
    obj.sum( ); 
    obj.mult( ); 
    obj.div( ); 
    obj.sub( ); 
    return 0;
}
