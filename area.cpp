#include <iostream>
using namespace std;

class Area {
public:

       void rectangle(float length, float width) {
              float area = length * width;
              cout << "Area of rectangle: " << area << endl;
            }

         void square(float side) {
                  float area = side * side;
                  cout << "Area of square: " << area << endl;
                }

            void circle(float radius) {
                    float area = 3.14 * radius * radius;
                    cout << "Area of circle: " << area << endl;
                    }

                    void triangle(float base, float height) {
                            float area = 0.5 * base * height;
                            cout << "Area of triangle: " << area << endl;
                            }

};

int main() {
    Area areaCalculator;

    areaCalculator.rectangle(10.0, 5.0);
    areaCalculator.square(4.0);
    areaCalculator.circle(2.5);
    areaCalculator.triangle(6.0, 4.0);

    return 0;
}