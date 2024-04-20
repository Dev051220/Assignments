#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure example
    struct Student s1;
    s1.roll_number = 101;
    strcpy(s1.name, "John");
    s1.marks = 85.5;

    printf("Structure Example:\n");
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("Size of Structure: %lu bytes\n", sizeof(s1));

    // Union example
    union Data data;
    data.intValue = 10;
    printf("\nUnion Example (Integer):\n");
    printf("Integer Value: %d\n", data.intValue);
    printf("Size of Union: %lu bytes\n", sizeof(data));

    data.floatValue = 3.14;
    printf("\nUnion Example (Float):\n");
    printf("Float Value: %.2f\n", data.floatValue);
    printf("Size of Union: %lu bytes\n", sizeof(data));

    strcpy(data.stringValue, "Hello");
    printf("\nUnion Example (String):\n");
    printf("String Value: %s\n", data.stringValue);
    printf("Size of Union: %lu bytes\n", sizeof(data));

    return 0;
}
