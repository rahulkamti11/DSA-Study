#include <iostream>
using namespace std;

int callByValue(int a){
    a = a+a;
    cout << "Inside the function: a = " << a << endl; // 20
    return 0;
}

int callByPointers(int* ptr){
    *ptr = 30;
    cout << "Inside the function: b = " << *ptr << endl; // 20
    return 0;
}

int callByReference(int& ref){
    ref = 50;
    cout << "Inside the function: b = " << ref << endl; // 20
    return 0;
}

int main() {

    cout << "-----Call By Value------" <<endl;
    int a = 10 ;
    cout << "Before function call: a = " << a << endl; //10
    callByValue(a);
    cout << "After function call: a = " << a << endl; //10


    cout << "\n-----Call By Reference using pointers-----" << endl ;
    int b = 20 ;
    cout << "Before function call: b = " << b << endl; //10
    callByPointers(&b);
    cout << "After function call: b = " << b << endl; //10



    cout << "\n-----Call By Reference using references-----" << endl ;
    int c = 40 ;
    cout << "Before function call: c = " << c << endl; //10
    callByReference(c);
    cout << "After function call: c = " << c << endl; //10


    return 0;
}