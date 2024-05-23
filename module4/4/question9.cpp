#include <iostream>
#include <vector>
using namespace std;
class Matrix1D {
private:
    vector<int> data;
public:
    Matrix1D(int size, const vector<int>& values) : data(values) {
        if (data.size() != size) {
            cout << "Error: Incorrect size for matrix initialization." << endl;
            exit(1);
        }
    }
    Matrix1D operator+(const Matrix1D& other) const {
        if (this->data.size() != other.data.size()) {
            cerr << "Error: Matrices have different sizes for addition." << endl;
            exit(1);
        }
        
        vector<int> result(this->data.size());
        for (size_t i = 0; i < this->data.size(); ++i) {
            result[i] = this->data[i] + other.data[i];
        }
        
        return Matrix1D(this->data.size(), result);
    }
    void display() const {
        for (int elem : data) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> matrix1_data = {1, 2, 3, 4, 5};
    vector<int> matrix2_data = {6, 7, 8, 9, 10};
    Matrix1D matrix1(matrix1_data.size(), matrix1_data);
    Matrix1D matrix2(matrix2_data.size(), matrix2_data);
    Matrix1D result = matrix1 + matrix2;
    cout << "Matrix 1:" << endl;
    matrix1.display();
    cout << "Matrix 2:" << endl;
    matrix2.display();
    cout << "Resultant Matrix:" << endl;
    result.display();
}