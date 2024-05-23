#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string company;
    string model;
    int year;

public:
    Car(const string& comp, const string& mdl, int yr) : company(comp), model(mdl), year(yr) {}

    void setCompany(const string& comp) {
        company = comp;
    }

    void setModel(const string& mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }

    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    string company, model;
    int year;

    cout << "Enter car company: ";
    getline(std::cin, company);

    cout << "Enter car model: ";
    getline(std::cin, model);

    cout << "Enter car year: ";
    cin >> year;

    Car car(company, model, year);

    cout << "\nDetails of the car:\n";
    cout << "Company: " << car.getCompany() << std::endl;
    cout << "Model: " << car.getModel() << std::endl;
    cout << "Year: " << car.getYear() << std::endl; 
}
