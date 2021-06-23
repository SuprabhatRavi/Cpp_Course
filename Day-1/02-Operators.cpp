/*
    Arithmetic => +,-,*,/,%,
        Unary Operators: =>  ++,--
        Binary Operators => +,-,*,/,%

    Relational Operators (>, <, >= , <=, ==)
    Logical Operators (|| , &&)
    Bitwise Operators (& , |, ^)
    Assignment Operator ( = )

    Other Operators:-
        1.) sizeof
        2.) Comma operator
        3.) Conditional ( condition ? cout << true : false)
*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    a = 7;
    b = 9;
    cout << "a+b=" << (a+b) << endl;
    cout << "a-b=" << (a-b) << endl;
    cout << "a*b=" << (a*b) << endl;
    cout << "a/b=" << (a/b) << endl;
    cout << "a%b=" << (a%b) << endl;

    cout << "Unary Operators" << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << --b << endl;


    cout << "************************" << endl;
    bool result = !(a == b);

    cout << result << endl;

    return 0;
}
