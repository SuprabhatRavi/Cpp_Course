#include <bits/stdc++.h>
using namespace std;
// Creates copies of the arrays
void merge(int arr[],int l, int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1],M[n2];
    for(int i=0;i<n1;i++){
        L[i] = arr[l+i]; 
    }
    for(int j=0;j<n2;j++){
        M[j] = arr[m+1+j];
    }

    int i,j,k;
    i = 0;
    j = 0;
    k = l;
    while(i<n1 && j<n2){
        if(L[i]<= M[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Copy the pending elements as it is
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
}


void merge_sort(int arr[],int l, int r){
    if(l<r){
        int m = l + (r-l)/2;

        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
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

    // Sort the array
    merge_sort(arr,0, n-1);

    // Print the sorted array
    display(arr, n);
    return 0;
}
