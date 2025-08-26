#include<iostream> 

using namespace std; 

class ArithmeticException
{
    private: 
    string message; 
    public: 
    ArithmeticException(string message)
    {
        this->message = message; 
    }
    string getMessage(void)
    {
        return this->message; 
    }
}; 

void acceptRecord(string msg , int &num1)
{
    cout<<msg; 
    cin>>num1; 
}
//to maintain docs , because implementer and caller can be different 
//Exception specification list   
int calculate(int num1 , int num2) throw (ArithmeticException)
{
    if(num2 == 0)
       throw ArithmeticException("Divide by zero"); 
    return num1/num2; 
}
void printRecord(int res)
{
    cout<<"res : "<<res<<endl; 
}
int main()
{
    cout<<"open the connection"<<endl; 
    int num1;
    acceptRecord("num1 : ",num1);      
    int num2; 
    acceptRecord("num2 : ",num2); 

    try
    {
        int res = calculate(num1,num2); 
        printRecord(res); 
    }
    catch(ArithmeticException ex)
    {
          cout<<ex.getMessage( )<<endl;   
    }
    
    cout<<"close the connection"<<endl; 
    return 0;

}

