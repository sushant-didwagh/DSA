// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void rec_bubble(int arr[], int n){
    
    if(n == 1){
        return;
    }
    
    int count = 0;
    int temp;
    for(int i = 0; i<n;i++){
        if(arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count ++;
        }
    }
    if(count == 0){
        return;
    }
    rec_bubble(arr, n-1);
}



int main() {
    // Write C++ code here
    int n = 6;
    int arr[n] = {13,46,24,52,20,9};
    
    rec_bubble(arr, n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




output:
9 13 20 24 46 52 

=== Code Execution Successful ===
