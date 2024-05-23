#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    Cricketer(const string& n, int a) : name(n), age(a) {}

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    Batsman(const string& n, int a) : Cricketer(n, a), totalRuns(0), averageRuns(0), bestPerformance(0) {}

    void inputBatsmanData() {
        input();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        const int totalMatches = 10;
        averageRuns = static_cast<double>(totalRuns) / totalMatches;
    }

    void displayBatsmanData() const {
        display();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman("Player", 25);

    cout << "Enter Batsman's Information:" << endl;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();

    cout << "\nBatsman's Information:" << endl;
    batsman.displayBatsmanData();
}
