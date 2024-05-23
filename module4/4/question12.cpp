#include <iostream>
using namespace std;
class Number;
void swapNumbers(Number& num1, Number& num2);
class Number {
private:
    int value;
public:
    Number(int val) : value(val) {}
    int getValue() const {
    return value;
    }
    friend void swapNumbers(Number& num1, Number& num2);
};
void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    Number num1(10);
    Number num2(20);
    cout << "Before swapping:" << endl;
    cout << "Number 1: " << num1.getValue() << endl;
    cout << "Number 2: " << num2.getValue() << endl;
    swapNumbers(num1, num2);
    cout << "After swapping:" << endl;
    cout << "Number 1: " << num1.getValue() << endl;
    cout << "Number 2: " << num2.getValue() << endl;
}