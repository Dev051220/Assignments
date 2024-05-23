#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& n, int id, int initialSalary) : name(n), employeeID(id), salary(initialSalary) {}
    void setSalary(int performanceFactor) {
        salary *= performanceFactor;
    }
    void getDetails() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Dev", 1, 50000);
    cout << "Initial Employee Details:" << endl;
    emp.getDetails();
    double performanceFactor = 1.1; 
    emp.setSalary(performanceFactor);
    cout << "\nUpdated Employee Details:" << endl;
    emp.getDetails();
}
