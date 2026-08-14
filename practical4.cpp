#include<iostream>
 using namespace std;

 class Area
 {
    public:

     float area(float side)
     {
        return side*side;
     }

     float area(float length,float width)
     {
        return length*width;
     }

     float area(float base,float height,int x)
     {
        return 0.5*base*height;
     }

     float area(float radius, int x)
     {
        return 3.14 * radius*radius;
     }
 };

 int main()
 {
    Area a;

    cout << "Area of square = " << a.area(5) << endl;

    cout << "Area of Rectangle = " << a.area(10.0f,6.0f) << endl;

    cout << "Area of triangle = " << a.area(10.0f,20.0f,6) << endl;

    cout << "Area of Cricle = " << a.area(40.0f,4) << endl;
    
    return 0;


 }