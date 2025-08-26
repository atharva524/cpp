#include<iostream> 

using namespace std; 

template<typename T> 
void swap_object(T &a, T &b)
{
    T temp = a; 
    a = b; 
    b = temp; 
}


int main(int argc, char const *argv[])
{
    int n1 = 10 , n2 = 20; 
    swap_object<int>(n1,n2); // T : type parameter 
    cout<<"n1 : "<<n1<<endl; 
    cout<<"n2 : "<<n2<<endl;  

    double d1 =11.33 , d2 = 10.33; 
    swap_object<double>(d1,d2); 
    cout<<"d1 : "<<d1<<endl; 
    cout<<"d2 : "<<d2<<endl;

    string s1 = "abc" , s2 = "xyz"; 
    //swap_object<string>(s1,s2); 
    swap_object(s1,s2); // type inference  
    cout<<"s1 : "<<s1<<endl; 
    cout<<"s2 : "<<s2<<endl;
    return 0;
}
