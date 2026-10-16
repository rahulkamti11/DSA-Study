#include <iostream>
using namespace std;

//Not suitable and not recommended , high chances of error

int main() {
    int end , start , index , value ;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int currentLength = sizeof(arr)/sizeof(arr[0]);

    cout << "\n------Deletion of an element from an array------" ;
    cout << "\nCurrent Elements in the array: ";
    cout << "\nArray size: " << currentLength << ": ";
    for(int i=0 ; i< currentLength ; i++) cout << arr[i] << " ";

    cout << "\n\n------Deletion at the end-----\n" ;
    currentLength = currentLength-1;
    cout << "Array size: " << currentLength << ": ";
    for(int i=0 ; i<currentLength ; i++) cout << arr[i] << " ";


    cout << "\n\n------Deletion at the beginning-----\n" ;
    currentLength = currentLength-1;
    cout << "Array size: " << currentLength << ": ";
    for(int i=1 ; i<currentLength+1 ; i++) cout << arr[i] << " ";


    cout << "\n\n------Deletion at the given index-----\n" ;
    cout << "Enter the index you want to delete the element at: ";
    cin >> index; 

    currentLength = currentLength-1;
    cout << "Array size: " << currentLength << ": ";
    for(int i=1 ; i<currentLength+2 ; i++){
        if(i==index+1) continue;
        else cout << arr[i] << " ";
    }

    cout << "\n\n------Deletion of a given value-----\n" ;
    cout << "Enter the value you want to delete from the array: ";
    cin >> value; 
    index = -1;


    //Some problem here
    currentLength = currentLength-1;
    cout << "Array size: " << currentLength << ": ";
    for(int i=1 ; i<currentLength+3 ; i++){
        if(arr[i]==value) index = i;
        else cout << arr[i] << " ";
    }

    if(index==-1) cout << "Element not present in the array." << endl;


    


    
}