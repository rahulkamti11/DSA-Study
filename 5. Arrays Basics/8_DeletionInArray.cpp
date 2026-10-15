#include <iostream>
using namespace std;

int main() {
    cout << "-------DELETION IN AN ARRAY-------" <<endl;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    cout<< "\nOriginal Array: ";
    for(int i=0 ; i<n ; i++) cout<< *(arr+i) << " " ;
    
    cout<< "\nArray after deleting last element: " ;
    n--;
    for(int i = 0; i<n ; i++) cout << *(arr+i) << " " ;

    cout<< "\nArray after deleting first element: " ;
    for(int i=0 ; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0; i<n ; i++) cout << *(arr+i) << " " ;

    int k;
    cout<< "\n\nEnter the index you want to delete element at: ";
    cin >> k;
    if(k<n && k>=0){
        for(int i=k ; i<n-1 ; i++){
            arr[i] = arr[i+1];
        }
        n--;
        cout<< "Array after deleting element at specific index: ";
        for(int i=0 ; i<n ;i++) cout << *(arr+i) << " ";
        cout << "\n";
    }
    else cout << "The index you entered is out of array's size,\nplease enter the index upto " << n << endl;

    int el , index=-1 , isFound = 0;
    cout<< "\n\nEnter the element you want to delete: ";
    cin >> el;
    for(int i=0 ; i<n ; i++){
        if(el == arr[i]){
            isFound=1;
            index = i;
        }
    }
    
    if(isFound == 1){
        for(int i=index ; i<n-1 ; i++){
            arr[i] = arr[i+1];
        }
        n--;
        cout<< "Array after deleting the specific element: ";
        for(int i=0 ; i<n ;i++) cout << *(arr+i) << " ";
        cout << "\n";
    }
    else cout << "The element you entered is not present in array." <<  endl;
    
    

    cout << "\n\n";
    return 0;
}