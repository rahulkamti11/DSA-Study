#include <iostream>
using namespace std;

int reverse(int a[], int n){
    int temp, j = n-1;
    for(int i = 0; i<n/2; i++){
        if(i!=j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
        } 
    }
    return 0;
}

int main() {
    cout << "Reverse an Array without using a 2nd Array" <<endl;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<< "Original Array:\n";
    for(int i = 0; i<size ; i++){
        cout<< arr[i] << ", ";
    }
    cout << "\b\b ";

    reverse(arr,size);

    cout<< "\nReversed Array:\n";
    for(int i = 0; i<size ; i++){
        cout<< arr[i] << ", ";
    }
    cout << "\b\b ";

    return 0;
}