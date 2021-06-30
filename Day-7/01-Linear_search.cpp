#include<bits/stdc++.h>
using namespace std;

// Complexity O(n)
int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,5,8,9,2,3,1,6,4};

    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter an element to search: " << endl;
    cin >> key;

    int result = linearSearch(arr,n,key);
    if(result != -1){
        cout << "Element is available at index " << result  << endl;
    }else{
        cout << "Element not available" << endl;
    }



    return 0;
}