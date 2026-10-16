#include <iostream>
using namespace std;

int main() {
    int end , start , index , value ;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    int size = length ;

    cout << "\n------Deletion of an element from an array------\nCurrent Elements in the array: ";
    cout << "\nArray size: " << size << ": ";
    for(int i=0 ; i<size ; i++) cout << arr[i] << " ";

    cout << "\n\n------Deletion at the end-----\n" ;
    cout << "Array size: " << --size << ": ";
    for(int i=0 ; i<size ; i++) cout << arr[i] << " ";

    cout << "\n\n------Deletion at the beginning-----\n" ;
    for(int i=0 ; i<size ; i++){
        arr[i] = arr[i+1]; 
    }
    cout << "Array size: " << --size << ": ";
    for(int i=0 ; i<size ; i++) cout << arr[i] << " ";


    cout << "\n\n------Deletion at the given index-----\n" ;
    cout << "Enter the index you want to delete the element at: ";
    cin >> index; 

    for(int i=index ; i<size ; i++ ){
        arr[i] = arr[i+1];
    }
    cout << "Array size: " << --size << ": ";
    for(int i=0 ; i<size ; i++) cout << arr[i] << " ";

    cout << "\n\n------Deletion of a given value-----\n" ;
    cout << "Enter the value you want to delete from the array: ";
    cin >> value; 

    index = -1;
    for(int i =0 ; i<size ; i++){
        if(arr[i]==value){
            index = i;
            break;
        }
    }
    if(index != -1){
        for(int i=index ; i<size ; i++){
            arr[i] = arr[i+1];
        }
        cout << "Array size: " << --size << ": ";
        for(int i=0 ; i<size ; i++) cout << arr[i] << " ";
    }
    else cout << "Element not present in the array." << endl;

    


    
}