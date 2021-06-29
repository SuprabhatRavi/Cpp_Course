#include<bits/stdc++.h>
using namespace std;
// global variable i;
int i;
class A{
    public:
    A(){
        cout << "Constructor called"<< endl;
    }
    ~A(){
        cout << "Destructor called" << endl;
        i = 10;
    }
};

int foo(){
    i = 3;
    A obj;
    return i;
}

int main(){
    cout << foo();
    return 0;
}
