#include<bits/stdc++.h>
using namespace std;

int factorial(int n);



int main(){
    int n;
    long long int result;
    cout << "Enter a non-negative number: ";
    cin >> n;
    result = factorial(n);
    cout << "Factorial of n is: " << result;
    return 0;
}

int factorial(int n){
    if(n>1){
        return factorial(n-1)*n;
    }else{
        return 1;
    }

}
