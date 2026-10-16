#include <iostream>
using namespace std;

int main() {

    int end , start , givenIndex , index;
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < length-1 ; i++) cout << arr[i] << " " ;

    cout << "\n\n----Inserting at the end----" <<endl;
    cout << "Enter the element you want to insert at the end of the array: " ;
    cin >> end;
    arr[length-1] = end;
    for(int i : arr) cout << i << " " ;

    cout << "\n\n----Inserting at the beginning----" <<endl;
    cout << "Enter the element you want to insert at the beginning of the array: " ;
    cin >> start;
    for(int i=length-1 ; i>0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = start;
    for(int i : arr) cout << i << " " ;

    cout << "\n\n----Inserting at the given index----" <<endl;
    cout << "Enter the index(0-10) you want to insert element at: ";
    cin >> index;
    cout << "Enter the element you want to insert at the given index of the array: " ;
    cin >> givenIndex;

    for(int i=length-1; i>index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = givenIndex;

    for(int i : arr) cout << i << " " ;


    return 0;
}