#include<iostream> 

using namespace std; 

void acceptRecord(string msg , int &num1)
{
    cout<<msg; 
    cin>>num1; 
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
        if(num2 == 0)
        {
            //throw 10; 
              throw 10.2; 
        }
        else 
        {
            int result = num1 / num2; 
            printRecord(result); 

        }
    }
    catch(int ex)
    {
        cout<<"int : Exception caught"<<endl; 
    }
    catch(double ex)
    {
        cout<<"double : Exception caught"<<endl; 
    }
    

    cout<<"close the connection"<<endl; 
    return 0;

}

