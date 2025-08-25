#include <iostream>

using namespace std;

class Product
{
private:
    string title;
    double price;

public:
    Product(void) : title(" "), price(0.0)
    {
    }
    virtual void acceptRecord(void)
    {
        cout << "Title : ";
        cin >> title;
        cout << "Price : ";
        cin >> price;
    }
    virtual void printRecord(void)
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};
class Book : public Product
{
private:
    int pageCount;

public:
    Book(void) : pageCount(0)
    {
    }
    // void acceptRecord(void)
    // {
    //     Product::acceptRecord();
    //     cout << "PageCount : ";
    //     cin >> pageCount;
    // }
    void printRecord(void)
    {
        Product::printRecord();
        cout << "PageCount : " << pageCount << endl;
    }
};

class Tape : public Product
{
private:
    int playTime;

public:
    Tape(void) : playTime(0)
    {
    }
    void acceptRecord(void)
    {
        Product::acceptRecord();
        cout << "playTime : ";
        cin >> playTime;
    }
    void printRecord(void)
    {
        Product::printRecord();
        cout << "PlayTime : " << playTime << endl;
    }
};
int menuList(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Book" << endl;
    cout << "2.Tape" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}
int main(int argc, char const *argv[])
{
    int choice;
    while ((choice = ::menuList()) != 0)
    {

        Product *ptr = NULL;
        switch (choice)
        {
        case 1:
            ptr = new Book(); // upcasting 
            break;
        case 2:
            ptr = new Tape();// upcasting 
            break;
        }
        if (ptr != NULL)
        {
            ptr->acceptRecord();
            ptr->printRecord();
        }
    }
    return 0;
}
