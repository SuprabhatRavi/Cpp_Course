#include <bits/stdc++.h>
using namespace std;


int partition(int a[], int s, int e){
    int i = s-1;
    int j = s;
    int pivot = e;

    for(j=s;j<=e-1;j++){
        if(a[j]<=a[pivot]){
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[pivot],a[i+1]);
    return i+1;

}


void quick_sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);

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
    quick_sort(arr,0, n-1);

    // Print the sorted array
    display(arr, n);
    return 0;
}
