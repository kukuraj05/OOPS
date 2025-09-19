#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int rollno;
    Student(string name, int age, int rollno): Person(name, age){
        this->rollno = rollno;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
    }
};

class Teacher : public Person{
    public:
    string subject;
    
    Teacher(string name, int age, string subject) : Person(name, age){
        this->subject = subject;
        
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main()
{
    Student p("Kaustubh Raj", 20,121);
    
    p.getInfo();
    return 0;
}