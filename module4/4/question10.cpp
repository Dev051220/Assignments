#include <iostream>
#include <cstring>
using namespace std;
class StringConcat {
private:
    char* buffer; 
public:
    StringConcat(const char* str1, const char* str2) {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        buffer = new char[len1 + len2 + 1];  
        strcpy(buffer, str1);
        strcat(buffer, str2);
    }

    ~StringConcat() {
        delete[] buffer;
    }
    void display() const {
        cout << "Concatenated String: " << buffer << endl;
    }
};
int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    StringConcat concat(str1, str2);
    concat.display();

    return 0;
}
