#include <iostream>
using namespace std;
class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual int area() const = 0; 
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}
    virtual int area() const override {
    return width * height;
    }
};

int main() {
    int width, height;
    
    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter height of rectangle: ";
    cin >> height;
    Rectangle rectangle(width, height);
    int area = rectangle.area();

    cout << "Area of rectangle: " << area << endl;
}