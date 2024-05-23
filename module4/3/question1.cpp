#include <iostream>
using namespace std;
inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << std::endl;

    int value;
    cout << "Enter a number to find its cubic value: ";
    cin >> value;

    cout << "Cubic value of " << value << " is: " << cubic(value) << std::endl;

}
