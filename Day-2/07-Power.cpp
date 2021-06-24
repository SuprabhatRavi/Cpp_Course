#include<bits/stdc++.h>
using namespace std;

int power_recursive(int a, int b){
    if(b==0) return 1;
    return a*power_recursive(a,b-1);    
}

int power_recursive_fast(int a, int b){
    if(b==0) return 1;
    if(b&1) return a*power_recursive_fast(a,b/2)*power_recursive_fast(a,b/2);
    else return power_recursive_fast(a,b/2)*power_recursive_fast(a,b/2);
}


// b = 5   ->  0101 & 0001   ->  1 -> Odd number
// b = 4 -> 0100 & 0001 -> 0 -> even number 

int power_iterative(int a, int b){
    int result;
    for(int i=0;i<b;i++){
        result *= a; 
    }
    return result;
}


int main(){
    int a,b;
    cin >> a >> b;
    cout << power(a,b) << endl;

    return 0;
}