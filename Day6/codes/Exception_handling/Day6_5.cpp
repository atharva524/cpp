#include<iostream> 

using namespace std; 

void acceptRecord(string msg , int &num1)
{
    cout<<msg; 
    cin>>num1; 
}
void printRecord(int num1)
{
    cout<<"num1 : "<<num1<<endl; 
}
int main()
{
    cout<<"open the connection"<<endl; 
    int num1;
    acceptRecord("num1 : ",num1);      
    int num2; 
    acceptRecord("num2 : ",num2); 

    int result = num1 / num2; 
    printRecord(result); 

    cout<<"close the connection"<<endl; 
    return 0;

}

