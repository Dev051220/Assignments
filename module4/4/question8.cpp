#include <iostream>
using namespace std;
int mathOperation(int a, int b) {
    return a + b;
}
double mathOperation(double a, double b) {
    return a + b;
}
int mathOperation(int a, int b, int c) {
    return a - b - c;
}
int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}
double mathOperation(double a, double b, double c) {
    return a / b / c;
}
int main() {
    int result1, result2;
    double result3, result4;
    result1 = mathOperation(5, 3);
    result2 = mathOperation(7.5, 2.5);
    result3 = mathOperation(10, 3, 2);
    result4 = mathOperation(2, 3, 4, 5);
    double num1 = 20.0, num2 = 2.0, num3 = 5.0;
    double divisionResult = mathOperation(num1, num2, num3);

    cout << "Addition Result (int): " << result1 << endl;
    cout << "Addition Result (double): " << result2 << endl;
    cout << "Subtraction Result: " << result3 << endl;
    cout << "Multiplication Result: " << result4 << endl;
    cout << "Division Result: " << divisionResult << endl;
}
