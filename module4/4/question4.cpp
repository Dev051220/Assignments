#include <iostream>
#include <string>
using namespace std;
class PersonalInfo {
protected:
    string name;
    int rollNumber;

public:
    PersonalInfo(const string& n, int roll) : name(n), rollNumber(roll) {}

    void displayPersonalInfo() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class AcademicInfo {
protected:
    float marks[5];
public:
    AcademicInfo(float m1, float m2, float m3, float m4, float m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    void displayAcademicInfo() const {
        cout << "Marks Sheet:" << endl;
        cout << "Subject 1: " << marks[0] << endl;
        cout << "Subject 2: " << marks[1] << endl;
        cout << "Subject 3: " << marks[2] << endl;
        cout << "Subject 4: " << marks[3] << endl;
        cout << "Subject 5: " << marks[4] << endl;
    }
};
class MarkSheet : public PersonalInfo, public AcademicInfo {
public:
    MarkSheet(const string& n, int roll, float m1, float m2, float m3, float m4, float m5)
        : PersonalInfo(n, roll), AcademicInfo(m1, m2, m3, m4, m5) {}

    void displayMarkSheet() const {
        cout << "\nStudent Mark Sheet:" << endl;
        displayPersonalInfo();
        displayAcademicInfo();
    }
};

int main() {
    string name = "Dev";
    int rollNumber = 11;
    int marks[] = {95, 82, 90, 80, 88};
    MarkSheet student(name, rollNumber, marks[0], marks[1], marks[2], marks[3], marks[4]);
    student.displayMarkSheet();
}
