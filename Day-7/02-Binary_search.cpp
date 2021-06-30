#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    if(start<=end){
        int mid = start + (end-start) /2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
           return binarySearch(arr,start,mid-1,key);
        }
        if(arr[mid] < key){
           return binarySearch(arr, mid+1, end, key);
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the element to search in array: " << endl;
    int key;
    cin >> key;

    int result = binarySearch(arr,0,n-1,key);



    return 0;
}
