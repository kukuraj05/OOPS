#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    ~Person(){
        cout<<"Parent class!!\n";

    }
};

class Student : public Person
{
public:
    int rollNo;

    ~Student(){
        cout<<"Child class!!\n";
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
    Student s;
    s.name = "Kaustubh Raj";
    s.age = 21;
    s.rollNo = 121;

    s.getInfo();
    return 0;
}