#include<bits/stdc++.h>
using namespace std;

long int gcd_recursively(long int a, long int b){
    return b==0 ? a : gcd_recursively(b,a%b);
}

void gcd_iterative(long int a, long int b){
    long int rem = 100;
    do{
        rem = a%b;
        a = b;
        b = rem;
    }while(rem!=0);

    cout << a << endl;
}

int main(){
    int a,b;
    cin >> a >> b;

    //gcd_iterative(a,b);

    cout << gcd_recursively(a,b);
    return 0;
}
