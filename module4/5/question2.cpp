#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swapValues(arr[j], arr[j+1]);
            }
        }
    }
}
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Unsorted integer array: ";
    printArray(intArray, n);
    bubbleSort(intArray, n);
    cout << "Sorted integer array: ";
    printArray(intArray, n);
    double doubleArray[] = {64.5, 34.2, 25.1, 12.4, 22.7, 11.9, 90.3};
    int m = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Unsorted double array: ";
    printArray(doubleArray, m);
    bubbleSort(doubleArray, m);
    cout << "Sorted double array: ";
    printArray(doubleArray, m);
    char charArray[] = {'g', 'e', 'b', 'a', 'd', 'c', 'f'};
    int p = sizeof(charArray) / sizeof(charArray[0]);
    cout << "Unsorted char array: ";
    printArray(charArray, p);
    bubbleSort(charArray, p);
    cout << "Sorted char array: ";
    printArray(charArray, p);
}