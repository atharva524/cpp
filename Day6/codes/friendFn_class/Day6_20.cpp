#include<iostream> 

using namespace std; 

class Test 
{
    private: 
    int x; 
    protected: 
    int y;
    public: 
    Test( int x , int y)
    {
        this->x = x; 
        this->y = y; 
    }
    friend int main();  
}; 
int main()
{
    Test t1(10,20); 
    cout<<t1.x<<endl; 
    cout<<t1.y<<endl; 
    return 0;
}
