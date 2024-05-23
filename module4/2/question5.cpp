#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
    string country;

public:
    Person(const string& n, int a, const string& c) : name(n), age(a), country(c) {}

    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(const string& c) {
        country = c;
    }
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getCountry() const {
        return country;
    }
};

int main() {
    string name, country;
    int age;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter country: ";
    getline(cin, country);

    Person person(name, age, country);

    cout << "\nDetails of the person:\n";
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;
}