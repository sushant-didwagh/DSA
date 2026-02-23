#include <bits/stdc++.h> 
using namespace std;

void sort(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }       
    }
}

int main() {
    int n; 
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}




//text
compare two nearest element and swap if next element is smaller than given. mean in first swap the largest element is goes on it's correct position, incremently check untill swaping is not stop.
