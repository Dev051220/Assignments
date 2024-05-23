#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    cout << "Before swap: int1 = " << int1 << ", int2 = " << int2 <<endl;
    swapValues(int1, int2);
    cout << "After swap: int1 = " << int1 << ", int2 = " << int2 <<endl;
    double double1 = 1.5, double2 = 2.5;
    cout << "Before swap: double1 = " << double1 << ", double2 = " << double2 << endl;
    swapValues(double1, double2);
    cout << "After swap: double1 = " << double1 << ", double2 = " << double2 <<endl;
    char char1 = 'A', char2 = 'B';
    cout << "Before swap: char1 = " << char1 << ", char2 = " << char2 <<endl;
    swapValues(char1, char2);
    cout << "After swap: char1 = " << char1 << ", char2 = " << char2 <<endl;
}