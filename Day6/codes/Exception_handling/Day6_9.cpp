#include <iostream>

using namespace std;
class IllegalArgumentException
{
private:
    string message;

public:
    IllegalArgumentException(string message)
    {
        this->message = message;
    }
    string getMessage(void)
    {
        return this->message;
    }
};
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(void) : real(0), imag(0)
    {
    }
    void setReal(int real) throw(IllegalArgumentException)
    {
        if (real < 0)
            throw IllegalArgumentException("Invalid Real");
        this->real = real;
    }
    void setImag(int imag) throw (IllegalArgumentException)
    {
        if (imag < 0)
            throw IllegalArgumentException("Invalid Imag");
        this->imag = imag;
    }
    int getReal(void) 
    {
        return this->real;
    }
    int getImag(void)
    {
        return this->imag;
    }
};

void acceptRecord(Complex &complex)
{
    try
    {
        int real, imag;
        cout << "Real : ";
        cin >> real;
        complex.setReal(real);

        cout << "Imag : ";
        cin >> imag;
        complex.setImag(imag);
    }
    catch (IllegalArgumentException ex)
    {
        cout<<ex.getMessage( )<<endl; 
    }
}
void printRecord(Complex &complex)
{
    cout << "real : " << complex.getReal() << endl;
    cout << "imag : " << complex.getImag() << endl;
}
int main(int argc, char const *argv[])
{
    Complex complex;
    ::acceptRecord(complex);
    ::printRecord(complex); 
    return 0;
}
