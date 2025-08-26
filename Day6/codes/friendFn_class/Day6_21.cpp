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
    friend void sum( void );   
}; 
void sum( void )
{
    Test t1(10,20); 
    int res = t1.x + t1.y; 
    cout<<"res : "<<res; 
}
int main()
{
    ::sum( ); 
    return 0;
}
