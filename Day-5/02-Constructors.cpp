#include<bits/stdc++.h>

using namespace std;

// Create a Student Class
class Student{
    public:
        string name;
        string school;
        int rollNo;
        int age;

        // Default constructor
        // Student(){}
        Student(){
            cout << "This is a default constructor" << endl;
        }

        // Parametrized constructor example 1
        Student(string n,string s,int r,int a){
            name = n;
            school = s;
            age = a;
            rollNo = r;
        }

        // Parametrized constructor example 2
        Student(string n,int r,int a){
            name = n;
            school = "D.A.V. Public school";
            age = a;
            rollNo = r;
        }

        void introduce(){
            cout << "Name: " << name << endl;
            cout << "School: " << school << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Age: " << age << endl;
        }



};



int main(){


    Student s1; // Dafault constructor is called
    s1.name = "Satyam";
    s1.school = "D.A.V. Public school";
    s1.rollNo = 15;
    s1.age = 10;
    s1.introduce();

    Student s2("Satyam","Cipherschools",23,21); // First parametrized constructor is called
    s2.introduce();

    
    Student s3("Simran", 28,11); // 2nd parametrized constructor is called
    s3.introduce();

    
    return 0;
}