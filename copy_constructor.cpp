#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    // we can declare different access modifiers accordingly
private:
    double salary;

public:
    // non-pparameterised
    Teacher()
    {
        cout << "Hi, I am constructor!!" << "\n";
        dept = "Computer Science";
    }

    // parameterised
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    Teacher(Teacher &orgObj){
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo(){
        cout<<"name : "<< name <<endl;
        cout<<"subject : "<< subject << endl;
        cout<<"dept : "<< dept;
    }
};


int main()
{
    Teacher t1("KAUSTUBH", "IT", "C++", 25000); // constructor call
    // t1.getInfo();
    
    Teacher t2(t1);  //custom copy constructor -invoked
    t2.getInfo();

    return 0;
}