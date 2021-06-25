#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    cout << "Value of x is: " << x << endl;
    cout << "Address of x is: " << &x << endl;

     int *y = &x;
    //int *y;
    //y = &x;

    cout << "Value at variable y is: " << y << endl;
    cout << "Value at the address in y is: " << *y << endl;
    cout << "Address of variable y is: " << &y << endl;
    cout << sizeof(y) << endl;
    *y = 100;
    cout << x << endl;

    return 0;
}
