#include<iostream> 
using namespace std; 
class Array 
{
    private: 
    int size; 
    int *arr; 
    public: 
    Array(int size)
    {
        this->size = size; 
        this->arr = new int[this->size]; 
    }
    void acceptRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Element : "; 
            cin>>arr[index]; 
        }
    }
    void printRecord( void )
    {
        for(int index = 0 ; index < this->size ; index++)
        {
            cout<<"Element "<<arr[index]<<endl; 
        }
    }
    ~Array( void )
    {
        if(this->arr!=NULL)
        {
            delete[] this->arr; 
            this->arr = NULL; 
        }
    }
}; 
int main(int argc, char const *argv[])
{
    Array a1(3); 
    a1.acceptRecord( ); 
    Array a2 = a1; // copy ctor will get  called 
    a2.printRecord( ); 
    return 0;
}
