#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i<5;i++){
        if(i==3){
            break;
        }
        cout <<  "Value of i: " << i << endl;
    }
    cout << i << endl;

    cout << " Sum of n natural numbers is" << endl;
    int sum = 0;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // Solution 1
    if(n>0){
        for(i=1;i <= n;i++){
            sum += i;
        }

        cout << sum << endl;
    }else{
        cout << 0 << endl;
    }

    // Solution 2
    cout << ((n*(n+1))/2) << endl;

    return 0;
}
