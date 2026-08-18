// write a program to define the constructor for libary also types of constructe to store the basic information //

#include <iostream>
using namespace std;

class Book
{
public:
    int price;
    string bookname;
    string author;

    Book(int p, string name,string atu)
    {
        price = p;
        bookname = name;
        author = atu;
    }

    void display()
    {
        cout << "Book price = " << price << endl;
        cout << "Book Name = " << bookname << endl;
        cout << "Book author= " << author << endl;
    }
};

int main()
{
    int price;
    string name;
    string author;

    cout << "Enter Book price: ";
    cin >> price ;
 

    cout << "Enter Book Name: ";
    cin>>name;
    
    cout << "Enter Book author: ";
     cin>>author;


    Book l1(price, name,author);

    cout << "\nBook Information:\n";
    l1.display();

    return 0;
}