#include<iostream> 
using namespace std; 
template<class X , class Y>
class Point 
{   
    private: 
    X xPos; 
    Y yPos; 
    public: 
    Point( )
    {   }
    Point(X xPos , Y yPos)
    {
        this->xPos = xPos; 
        this->yPos = yPos; 
    }
    void displayPoint( void)
    {
        cout<<"xPos : "<<xPos<<endl;
        cout<<"yPos : "<<yPos<<endl; 
    }
}; 
int main(int argc, char const *argv[])
{
    //Point<int,int> pt1(10,20); 
    
    //Point<float , float> pt1(11.33,12.33); 
    
    Point<int , char> pt2(10,'A'); 
    pt2.displayPoint( ); 
    return 0;
}
