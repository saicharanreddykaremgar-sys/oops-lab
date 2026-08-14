// getting input from user //

#include<iostream>
using namespace std;

class Calculator
{
    public:

        int add(int a, int b)
        {
            return a + b;
        }

        int add(int a, int b, int c)
        {
            return a + b + c;
        }

};

int main()
{
     Calculator c1;

     int a,b,c;

     cout << "Enter two numbers = "<< endl;
     cin >> a >> b;

     cout << "Addition of two numbers = " << endl;
         cout << c1.add(a,b) << endl; 

    cout << "Enter three numbers = " << endl;
    cin >> a >> b >> c;

    cout << "Addition of three numbers = " << endl;
        cout << c1.add(a,b,c) << endl;

         return 0;
}