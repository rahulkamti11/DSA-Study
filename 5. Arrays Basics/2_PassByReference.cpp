#include <iostream>
using namespace std;

int changeArray(int arr[],int len){
    cout<< "\n\nInside Function...";
    
    for(int i = 0; i<len; i++){
        arr[i]*=2;
    }
    cout<< "\nArray Values Changed...";
    return 0;
}

int main() {
    int a[5] = {1,2,3,4,5} ;
    int len = sizeof(a)/sizeof(a[0]);

    cout << "In C++ Arrays are always passed by reference in functions arguments." <<endl;
    cout<< "-----Orginal Array-----"<< endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<< " | "<< a[i] ;
    }
    cout << " |";

    changeArray(a,len);

    cout<< "\n\n-----New Array-----"<< endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<< " | "<< a[i] ;
    }
    cout << " |";
   

    return 0;
}