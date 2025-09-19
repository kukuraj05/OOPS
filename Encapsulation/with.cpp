#include <iostream>
using namespace std;

class Student {
private:   // data is hidden (cannot be accessed directly)
    string name;
    int marks;

public:    // only through functions we can access/modify
    void setData(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Kaustubh", 92);
    s1.display();

    return 0;
}