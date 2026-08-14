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
     cout << "Addition of two numbers = "<< endl;
     cout << c1.add(10,20) << endl;

     cout << "Addition of three numbers ="<< endl;
     cout << c1.add(10,20,30)<< endl;

     return 0;
}