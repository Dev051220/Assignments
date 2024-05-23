#include <iostream>
using namespace std;
class Calculator {
private:
    int number1;
    int number2;

public:
    Calculator(int num1, int num2) : number1(num1), number2(num2) {}

    //perform addition
    int addition() {
        return number1 + number2;
    }

    //perform subtraction
    int subtraction() {
        return number1 - number2;
    }

    //perform multiplication
    int multiplication() {
        return number1 * number2;
    }

    //perform division
    float division() {
        if (number2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 in case of division by zero
        }
        else
        return number1 / number2;
    }
};

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    Calculator calc(n1, n2);

    cout << "Addition: " << calc.addition() << endl;
    cout << "Subtraction: " << calc.subtraction() << endl;
    cout << "Multiplication: " << calc.multiplication() << endl;
    cout << "Division: " << calc.division() << endl;

    return 0;
}
