#include <iostream>
using namespace std;

int main() {
    cout << "-----Pointers Basics-----" <<endl;

    int var = 10;

    //C++ style declaration --> emphasizes that datatype is pointer ()
    int* ptrVar1 = &var; //--> Use when declaring single variable in same line.
    int* A, *B, C ; // Variable 'A' and 'B' is a pointer variable , Variable 'C' is a normal int variable.

    //C style declaration --> seems like '*' is the part of the variable name. 
    int *ptrVar2 = &var; //--> Use when declaring multiple variable in same line.
    int *D, *E, F; // Variable 'D' and 'E' is a pointer variable , Variable 'F' is a normal int variable.


    int a = 10;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    cout << "Value of var a (a): " << a << endl;
    cout << "Address of var a (&a): " << &a << endl; 
    cout << "Address of var a (ptr1): "  << ptr1 << endl;
    cout << "Value of var a (*ptr1): " << *ptr1 << endl << endl;

    cout << "Address of ptr. var ptr1 (&ptr1): " << &ptr1 << endl; 
    cout << "Address of ptr. var ptr1 (ptr2): "  << ptr2 << endl;
    cout << "Value of ptr. var ptr1 (*ptr2): " << *ptr2 << endl;
    cout << "Value of var a (**ptr2): " << **ptr2 << endl;


    return 0;
}