#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
};

class Teacher{
    public:
        string subject;
        double salary;
};

class TA : public Student, public Teacher {
public:
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;

    }
};

int main()
{
    TA t1;
    t1.name = "Kaustubh Raj";
    t1.rollno = 121;
    t1.salary = 12000;
    t1.subject = "chemistry";
    
    t1.getInfo();
    return 0;
}