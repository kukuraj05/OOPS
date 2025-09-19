#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
    }
};

int main()
{
    Student s("Kaustubh Raj", 20, 121);
    
    s.getInfo();
    return 0;
}