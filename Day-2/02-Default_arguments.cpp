#include<bits/stdc++.h>
using namespace std;

int sum(int a=0, int b=0, int c=0, int d=0,int e=10){
    if(e==0){
        return a+b+c+d;
    }else{
        return a+b;
    }

}


int main(){
    cout << sum() << endl;
    cout << sum(1) << endl;
    cout << sum(1,2) << endl;
    cout << sum(1,2,3) << endl;
    cout << sum(1,2,3,4) << endl;

    return 0;
}
