#include<iostream>
using namespace std;

int main(){
    int a,b;
    a = 7;
    b = 2;

    /*
        if (condition is true){
            run if block
        }else{
            run else block
        }


        if (condition is true){
            run if block
        }else if(){
            run this if block
        }else{
            run else block
        }

    */
    if((a%b==0) && (a>b)){
        cout << "Inside the first if block" << endl;
    }else{
        cout << "In else block" << endl;
    }
    int number;
    char c;
    cin >> number >> c;

    cout << "Char is: " << c << endl;
    if(number>0){
        cout << "Positive Number" << endl;
    }else if(number < 0){
        cout << "Negative number" << endl;
    }else{
        cout << "Zero is entered" << endl;
    }






    return 0;
}
