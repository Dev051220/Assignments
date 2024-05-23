#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void readPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    double percentage;

public:
    Student(const string& n, int a, double p) : Person(n, a), percentage(p) {}

    void readStudentData() {
        readPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const string& n, int a, double s) : Person(n, a), salary(s) {}

    void readTeacherData() {
        readPersonData();
        cout << "Enter salary: $";
        cin >> salary;
    }

    void displayTeacherData() const {
        displayPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student("dev", 20, 85.5);
    Teacher teacher("anjana madam", 35, 50000.0);

    cout << "Enter Student Information:" << endl;
    student.readStudentData();

    cout << "\nEnter Teacher Information:" << endl;
    teacher.readTeacherData();

    cout << "\nStudent Information:" << endl;
    student.displayStudentData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacherData();
}
