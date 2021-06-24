#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    a++;
    cout << "Value of the copy variable a is: " << a << endl;
}

void incre_by_address(int *ptr){
    (*ptr)++;
}
// Reference is an alias
void incre_by_reference(int &s){
    s++;
}


void swap_a(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 10;
    //cout << "Address of a variable " << &a << endl;

    // incre_by_value(a);

    //incre_by_address(&a);

    // incre_by_reference(a);

    cout << a << endl;;

    int b = 20;
    swap_a(a,b);
    cout << "a is " << a << " and b is " << b << endl;




    return 0;
}
