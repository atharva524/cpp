#include<iostream> 

using namespace std; 

void swap_object(int &a, int &b)
{
    int temp = a; 
    a = b; 
    b = temp; 
}
void swap_object(double &a, double &b)
{
    double temp = a; 
    a = b; 
    b = temp; 
}
void swap_object(string &a, string &b)
{
    string temp = a; 
    a = b; 
    b = temp; 
}

int main(int argc, char const *argv[])
{
    int n1 = 10 , n2 = 20; 
    swap_object(n1,n2);
    cout<<"n1 : "<<n1<<endl; 
    cout<<"n2 : "<<n2<<endl;  

    double d1 =11.33 , d2 = 10.33; 
    swap_object(d1,d2); 
    cout<<"d1 : "<<d1<<endl; 
    cout<<"d2 : "<<d2<<endl;

    string s1 = "abc" , s2 = "xyz"; 
    swap_object(s1,s2); 
    cout<<"s1 : "<<s1<<endl; 
    cout<<"s2 : "<<s2<<endl;
    return 0;
}
