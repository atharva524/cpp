#include <iostream>

using namespace std;

class Base
{
private:
    int num1;
    int num2;

public:
    Base(void) : num1(10), num2(20)
    {
    }
    virtual void f1(void)
    {
        cout << "Base::f1" << endl;
    }
    virtual void f2(void)
    {
        cout << "Base::f2" << endl;
    }
    virtual void f3(void)
    {
        cout << "Base::f3" << endl;
    }
    void f4(void)
    {
        cout << "Base::f4" << endl;
    }
    void f5(void)
    {
        cout << "Base::f5" << endl;
    }
};
class Derived : public Base
{
private:
    int num3;

public:
    Derived(void) : num3(30)
    {
    }
    virtual void f1(void)
    {
        cout << "Derived::f1" << endl;
    }
    void f2(void)
    {
        cout << "Derived::f2" << endl;
    }
    /*
    Inherited from Base class
    virtual void f3(void)
    {
        cout<<"Base::f3"<<endl;
    }
    */
    void f4(void)
    {
        cout << "Derived::f4" << endl;
    }
    virtual void f5(void)
    {
        cout << "Derived::f5" << endl;
    }
    virtual void f6(void)
    {
        cout << "Derived::f6" << endl;
    }
};
int main()
{
    cout<<sizeof(Base);  
    return 0;
}
