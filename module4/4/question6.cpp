#include <iostream>
using namespace std;
class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base() : privateVar(1), protectedVar(2), publicVar(3) {}

    void showPrivate() {
        cout << "Private member of Base class: " << privateVar << endl;
    }

    void showProtected() {
        cout << "Protected member of Base class: " << protectedVar << endl;
    }

    void showPublic() {
        cout << "Public member of Base class: " << publicVar << endl;
    }
};
class Derived : public Base {
public:
        void accessBaseMembers() {
        cout << "Protected member of Base class accessed in Derived class: " << protectedVar << endl;
        cout << "Public member of Base class accessed in Derived class: " << publicVar << endl;
    }
};
int main() {
    Base objBase;
    Derived objDerived;
    cout << "Public member of Base class accessed in main: " << objBase.publicVar << endl;
    objBase.showPublic();
    objBase.showProtected();
    objBase.showPrivate(); 
    cout << endl;
    objDerived.accessBaseMembers();
}