#include<iostream> 

using namespace std; 
class Shape
{
    protected: 
    float area; 
    public: 
    virtual void calculateArea( void ) = 0; // pure-virtual function 
    void printRecord( void )
    {
        cout<<"Area : "<<area<<endl; 
    }
    virtual ~Shape( )
    { }
}; 
class Rectangle : public Shape 
{
    private: 
    float length; 
    float breadth; 
    public: 
    void setLength( float length)
    {
        this->length = length; 
    }
    void setBreadth( float breadth)
    {
        this->breadth = breadth; 
    }
    void calculateArea( void )
    {
        this->area = this->length * this->breadth; 
    }
}; 
class Math 
{
    public: 
    const static float PI; 
    static float pow(float base , int index)
    {
        float result = 1.0; 
        for(int count = 1 ; count <=index ; count++)
        {
            result = result * base; 
        }
        return result; 
    }
}; 
const float Math :: PI = 3.142; 
class Circle : public Shape 
{
    private: 
    float radius; 
    public: 
    void setRadius( float radius )
    {
        this->radius = radius; 
    }
    void calculateArea(void)
    {
        this->area = Math::PI * Math::pow(this->radius , 2); 
    }
}; 
int menuList( void )
{
    int choice; 
    cout<<"0.Exit"<<endl; 
    cout<<"1.Rectangle"<<endl; 
    cout<<"2.Circle"<<endl;
    cout<<"Enter the choice : "; 
    cin>>choice; 
    return choice;  
}
void acceptRecord(Shape *shape)
{
    if(typeid(*shape) == typeid(Rectangle))
    {
        Rectangle *rect = (Rectangle*)shape;
        float length , breadth; 
        cout<<"Length : "; 
        cin>>length; 
        rect->setLength(length); 
        
        cout<<"Breadth : "; 
        cin>>breadth; 
        rect->setBreadth(breadth); 
    } 
    else if(typeid(*shape) == typeid(Circle))
    {
        Circle *c = (Circle*)shape;
        float radius; 
        cout<<"Radius : "; 
        cin>>radius; 
        c->setRadius(radius); 
    }
    else 
      cout<<"Invalid Shape"<<endl; 
}
void printRecord(Shape *shape)
{
    shape->printRecord( ); 
}
int main(int argc, char const *argv[])
{
    int choice; 
    while((choice = ::menuList())!=0)
    {
        Shape *shape = NULL; 
        switch (choice)
        {
        case 1: 
            shape = new Rectangle( ); // upcasting 
            break;
        case 2: 
            shape = new Circle( ); // upcasting 
        }
        if(shape!=NULL)
        {
            ::acceptRecord(shape); 
            shape->calculateArea( ); 
            ::printRecord(shape); 
        }
        delete shape; 
        shape = NULL; 
    }
    return 0;
}
