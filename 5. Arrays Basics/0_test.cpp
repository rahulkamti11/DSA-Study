#include <iostream>
using namespace std;

int reverse(int a[],int n){
    int i= 0 , j = n-1 , temp;

    while(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return 0;
}

int main() {
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