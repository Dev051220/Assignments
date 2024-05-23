#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }
    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;

    Rectangle rectangle(l, w);

    cout << "Area: " << rectangle.calculateArea() << std::endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    return 0;
}
