#include <iostream>
#include <cmath>
using namespace std;
float calculateArea(float length, float breadth) {
    return length * breadth;
}
float calculateArea(float base, float height, char type) {
    if (type == 'T' || type == 't')
        return 0.5 * base * height;
    else if (type == 'R' || type == 'r')
        return base * height;
    else {
        cout << "Invalid type. Please specify 'T' for triangle or 'R' for rectangle." << endl;
        return -1;
    }
}

float calculateArea(float radius) {
    return PI * radius * radius;
}
int main() {
    float length, breadth, base, height, radius;
    char type;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << calculateArea(length, breadth) << endl;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculateArea(base, height, 'T') << endl;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << calculateArea(radius) << endl;
}
