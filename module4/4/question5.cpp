#include <iostream>
using namespace std;
class Students {
protected:
    int rollNumber;

public:
    Students(int roll) : rollNumber(roll) {}
};
class Test : public Students {
protected:
    float subject1Marks;
    float subject2Marks;

public:
    Test(int roll, float marks1, float marks2) : Students(roll), subject1Marks(marks1), subject2Marks(marks2) {}
};
class Result : public Test {
private:
    float totalMarks;

public:
    Result(int roll, float marks1, float marks2) : Test(roll, marks1, marks2) {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    int rollNumber = 101;
    float marks1 = 85;
    float marks2 = 90;

    Result studentResult(rollNumber, marks1, marks2);
    studentResult.displayResult();
}
