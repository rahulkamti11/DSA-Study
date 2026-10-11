#include <iostream>
using namespace std;

//References : Alias for a variable , Used to access or modify a variable.
// A reference is not like a separate variable like a ptr. var. , it is just another name for a variable.

int main() {
    cout << "----References Basics----" <<endl;
    int a = 10 ;
    int& b = a ;

    cout << "a = " << a << "\nb = " << b << endl;
    a = 20 ; 
    cout << "a = " << a << "\nb = " << b << endl;
    b = 30 ;
    cout << "a = " << a << "\nb = " << b << endl;
    b = a+b ; 
    cout << "a = " << a << "\nb = " << b << endl;


    return 0;
}