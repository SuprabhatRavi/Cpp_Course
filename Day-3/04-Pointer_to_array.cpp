#include<bits/stdc++.h>
using namespace std;
int main(){

    // Array with 4 elements
    int val[4] = {1,2,3,4};
    int *ptr;

    ptr = val;
    cout << ptr << endl;
    cout << *ptr+1 << endl;
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << " " << ptr[3] << endl;


    cout << "********For Loop********" << endl;
    for(int i=0;i<4;i++){
        cout << *ptr+i << " ";
    }

    return 0;
}
