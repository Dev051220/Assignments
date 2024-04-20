#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
};


union Data {
    int num;
    float fnum;
};

int main() {

    struct Student s;
    s.id = 101;
    strcpy(s.name, "John");

    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Size of Structure: %zu\n\n", sizeof(s));


    union Data d;
    d.num = 10;
    printf("Value of num: %d\n", d.num);

    d.fnum = 3.14;
    printf("Value of fnum: %.2f\n", d.fnum);

    printf("Size of Union: %zu\n", sizeof(d));

    return 0;
}
