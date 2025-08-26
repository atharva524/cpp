#include<iostream> 
using namespace std;
//generic class 
template<class T>
class Array 
{
    private: 
    int size; 
    T *arr; 
    public: 
    Array(int size = 0)
    {
        if(size>0)
        {
            this->size = size; 
            this->arr = new T[this->size]; 
        }
        else 
          this->arr = NULL; 
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
            cout<<"Element : "<<arr[index]<<endl; 
        }
    }
    ~Array(void)
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
    //Array<int> a1(2); 
    
    Array<double> a2(2); 
    a2.acceptRecord( ); 
    a2.printRecord( );  
    return 0;
}
