#include <iostream>
using namespace std;
class MaxFinder;
int findMax(const MaxFinder& obj);
class MaxFinder {
private:
    int num1, num2;
public:
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}
    friend int findMax(const MaxFinder& obj);
};
int findMax(const MaxFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    MaxFinder maxFinder(num1, num2);
    cout << "Maximum number is: " << findMax(maxFinder) << endl;
}
