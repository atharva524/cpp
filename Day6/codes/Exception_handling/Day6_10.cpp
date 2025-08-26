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
    void setImag(int imag) throw(IllegalArgumentException)
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

void acceptRecord(Complex &complex) throw(IllegalArgumentException)
{
    int real, imag;
    cout << "Real : ";
    cin >> real;
    complex.setReal(real);

    cout << "Imag : ";
    cin >> imag;
    complex.setImag(imag);
}
void printRecord(Complex &complex) throw( )
{
    cout << "real : " << complex.getReal() << endl;
    cout << "imag : " << complex.getImag() << endl;
}
int menuList(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.AcceptRecord" << endl;
    cout << "2.PrintRecord" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}
int main(int argc, char const *argv[])
{
    try
    {
        Complex complex;
        int choice;
        while ((choice = menuList()) != 0)
        {
            try
            {
                switch (choice)
                {
                case 1:
                    acceptRecord(complex);
                    break;
                case 2:
                    printRecord(complex);
                    break;
                }
            }
            catch (IllegalArgumentException &ex)
            {
                cout << ex.getMessage() << endl;
            }
        }
    }
    catch (...)
    {
        cout<<"Generic catch "<<endl; 
    }


    
    return 0;
}
