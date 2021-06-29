#include<bits/stdc++.h>

using namespace std;


class Number{
    int a;
    public:
        // Deafult constructor
        Number(){
            a = 0;
            cout << "Constructor called" << endl;
        }
        // Parametrized constrcutor
        Number(int num){
            cout<< "Parametrized constructor called" << endl;
            a = num;
        }

        // Copy constructor
        Number(Number &obj){
            cout<< "Copy constructor called" << endl;
            a = obj.a;
        }


        void display(){
            cout << "Number is " << a << endl;

        }
};


int main(){
    // Number x,y,z;  // Dafault constrctor is called
    Number x,y,z(42),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();
    
    z2 = z; // Copy constructor will not invoke
    z2.display();

    Number z3 = z; // Copy constructor will be called


    return 0;
}