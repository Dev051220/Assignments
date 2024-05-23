#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    public:
    Address(const string& street, const string& city, const string& state)
        : street(street), city(city), state(state){}

    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    char grade;

public:
    Student(const string& n, const string& sClass, int roll, int m) 
        : name(n), studentClass(sClass), rollNumber(roll), marks(m) {
        calculateGrade();
    }

    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Address address1("adajan", "surat", "gujarat");
    Address address2("marine drive", "mumbai", "maharastra");

    Student student1("Dev", "XII", 110, 89);
    Student student2("Neel", "XI", 200, 70);

    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << "Student 1 ";
    address1.display();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInfo();
    cout << "Student 2 ";
    address2.display();
}
