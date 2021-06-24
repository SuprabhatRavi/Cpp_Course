// #include<iostream>
// #include<cmath>

#include<bits/stdc++.h>

using namespace std;

/*
    return_type function_name(params){
        function body
    }

*/

// function declaratio n / function prototype
int addition(int c,int d);

int subtraction(int a, int b){
    return a-b;
}


int main(){
    int a,b;
    bool is_continue = true;

    while(is_continue){
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Enter the option \n";
        cout  << "Press 1 for addition \n";
        cout  << "Press 2 for subtraction \n";
        cout  << "Press 3 for power \n";
        cout  << "Press 4 for exit \n";
        cout << "Your Input: ";

        int res;
        cin >> res;

        // if(res==1){

        // }else if(res==2){

        // }

        switch(res){
            case 1:
                cout << "The sum of 2 numbers is: " << addition(a,b) << endl;
                break;
            case 2:
                cout << "The difference of 2 numbers is: " << subtraction(a,b) << endl;
                break;
            case 3:
                cout << "a power b is: " << pow(a,b) << endl;
                break;
            case 4:
                is_continue = false;
                break;
            default:
                cout << "Please use the numbers from 1 to 4 " << endl;
                break;
        }
    }

    return 0;
}


int addition(int c, int d){
    return c+d;
}
