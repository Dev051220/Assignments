#include <iostream>
using namespace std;
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    cout << "Area of the circle: " << circle.calculateArea() << std::endl;
    cout << "Circumference of the circle: " << circle.calculateCircumference() << std::endl;

    return 0;
}
