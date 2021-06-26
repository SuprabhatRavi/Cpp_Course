#include<bits/stdc++.h>

using namespace std;

void display(int m[5]){
    cout << "Marks of students are: " << endl;
    for(int i=0;i<5;i++){
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main(){
    int numbers[5];
    cout << "Enter 5 numbers" << endl;
    for(int i=0;i<5;i++){
        cin >> numbers[i];
    }

    cout << "You entered: " << endl;
    for(int i=0;i<5;i++){
        cout << numbers[i];
    }

    cout << "Creating a 2D array now: " << endl;
    int arr[2][3];

    cout << "Enter 6 numbers: " << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

     cout << "You entered: " << endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
    }

    // Creating marks
    int marks[5] = {85,79,63,54,78};
    display(marks);

    return 0;
}