#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }
    bool isValid() const {
        if (month < 1 || month > 12 || day < 1)
            return false;

        int maxDays = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDays = 29;
            } else {
                maxDays = 28;
            }
        }

        return day <= maxDays;
    }
};

int main() {
    Date date(10, 05, 2024);
    cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
    if (date.isValid()) {
        cout << "This is a valid date." << endl;
    } else {
        cout << "This is not a valid date." << endl;
    }
}
