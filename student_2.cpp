#include <bits/stdc++.h>
using namespace std;

class Student{
private: 
    string name;
    int marks;
public:
    Student(){
        string n;
        cin>>n;
        name = n;
        int marks;
        cin>>marks;
        this->marks = marks;
    }

    void display(){
        cout<<"Name: "<< name <<"\n" <<"Marks: "<<marks;
    }
};
int main()
{
    Student s1;

    s1.display();
    
    return 0;
}