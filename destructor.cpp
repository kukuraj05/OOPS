#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
        
    }
    
    
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        this->cgpaPtr = obj.cgpaPtr;
    }

    ~Student() {
        cout<<"Hi, I delete everything\n";
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};
int main()
{
    Student s1("bharat yadav" , 9.4);
    
    Student s2(s1);
    s2.getInfo();
    
    s1.name = "Kaustubh Raj";
    *(s2.cgpaPtr) = 4.9;
    s1.getInfo();


    return 0;
}
