#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a<b;
}


void bubble_sort(int arr[], int n, bool (*cmp)(int,int))
{
    for (int j = n - 1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            // if (arr[i + 1] < arr[i])
            if(cmp(arr[i+1],arr[i]))
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Take input
    cout << "How many elements do you want to enter:" << endl;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort thye array
    bubble_sort(arr, n, compare);

    // Print the sorted array
    display(arr, n);
    return 0;
}
