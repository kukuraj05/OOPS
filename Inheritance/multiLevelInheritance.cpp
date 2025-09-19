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
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

};

class gradStudent : public Student{
    public:
    string researchArea;
    
    gradStudent(string name, int age, int rollno, string researchArea) : Student(name, age, rollno){
        this->researchArea = researchArea;
    }
    

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
        cout << "researchArea: " << researchArea << endl;
    }
};

int main()
{
    gradStudent s("KAUSTUBH RAJ", 20, 121, "IT");
    s.getInfo();
    return 0;
}