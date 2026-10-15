#include <iostream>
using namespace std;

int main() {
    cout << "------------Insertion in an Array-----------" <<endl;

    cout << "\n----Insertion at last----" << endl;
    int arr1[5] = {1,2,3,4};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Original Array : ";
    for(int i = 0 ; i<size ; i++ ) if(arr1[i] != 0) cout << *(arr1+i) << " ";
    cout << "\nEnter the number you want to add: " ;
    cin >> arr1[size-1]; 
    cout << "New Array: " ; 
    for(int i = 0 ; i<size ; i++) cout << *(arr1+i) << " ";



    cout << "\n\n----Insertion at start----" << endl;
    int arr2[5] = {2,3,4,5};
    int size2 = 5;
    cout << "Original Array : ";
    for(int i = 0 ; i<size2 ; i++ ) if(arr2[i] != 0) cout << *(arr2+i) << " ";
    for(int i = size2-1 ; i > 0 ; i--){
        arr2[i] = arr2[i-1] ;
    } 
    cout << "\nEnter the no. you want to add at the start: ";
    cin >> arr2[0];
    cout << "New Array: " ; 
    for(int i = 0 ; i<size2 ; i++) cout << *(arr2+i) << " ";



    cout << "\n\n----Insertion at a specific index----" << endl;
    int index , num ;
    int arr3[10] = {1,2,3,4,5,6,7,8,9};
    int size3 = sizeof(arr3)/sizeof(arr3[0]);

    cout << "Original Array : ";
    for(int i= 0 ; i<size3 ; i++) if(arr3[i] != 0) cout << *(arr3+i) <<" " ;
    cout << endl ;
    cout << "Enter the no. you want to insert: " ; 
    cin >> num;
    cout << "Enter the index you want to insert the value at: ";
    cin >> index ;

    if(index <= size3){
        for(int i =size3-1 ; i>index; i-- ){
            arr3[i] = arr3[i-1];
        }
        arr3[index] = num ;
        cout << "New Array: " ; 
        for(int i= 0 ; i<size3 ; i++) cout << *(arr3+i) << " ";
    }
    else{
        cout << "\nIndex size is out of the array's size,\nplease choose a smaller index.";
    }

    return 0;
}