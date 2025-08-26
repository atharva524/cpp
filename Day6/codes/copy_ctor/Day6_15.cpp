#include<iostream> 
using namespace std; 

class Complex
{
    int real; 
    int imag; 
    public: 
    Complex( void )
    {   }
    Complex(int real , int imag)
    {
        this->real = real; 
        this->imag = imag; 
    }
    // this = &c2 
    // other = c1; 
    Complex(const Complex &other)
    {
        //shallow copy 
        cout<<"Complex(const Complex &other)"<<endl;  
        this->real = other.real; 
        this->imag = other.imag; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    Complex c1(10,20); 
    Complex c2(c1); 
    c2.printRecord( ); 
    return 0;
}

int main2(int argc, char const *argv[])
{
    Complex c1(10,20); 
    Complex c2; 
    c2 = c1; // no copy ctor gets called 
    return 0;
}

int main1(int argc, char const *argv[])
{
    Complex c1(10,20);
    Complex c2 = c1; // init 
    c2.printRecord( );   
    return 0;
}
