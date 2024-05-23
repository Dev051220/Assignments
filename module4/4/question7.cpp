#include <iostream>
using namespace std;
class Base {
private:
    int baseVar;
public:
    Base(int var) : baseVar(var) {
        cout << "Base class constructor called with value: " << baseVar << endl;
    }
};
class Derived : public Base {
private:
    int derivedVar;
public:
    Derived(int baseValue, int derivedValue) : Base(baseValue), derivedVar(derivedValue) {
        cout << "Derived class constructor called with value: " << derivedVar << endl;
    }
};
class FurtherDerived : public Derived {
private:
    int furtherDerivedVar;
public:
    FurtherDerived(int baseValue, int derivedValue, int furtherDerivedValue) : Derived(baseValue, derivedValue), furtherDerivedVar(furtherDerivedValue) {
        cout << "FurtherDerived class constructor called with value: " << furtherDerivedVar << endl;
    }
};

int main() {
    FurtherDerived obj(10, 20, 30);
    return 0;
}
