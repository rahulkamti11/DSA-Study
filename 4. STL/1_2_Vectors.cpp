#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Aceesing Elements of the Vector" <<endl;

    vector <int> vec1 = {1,2,3};

    //Vector Methods/Algorithms:
    
    // at() , []  -->  used to access element
    // front() , back()  --> used to access first and last element of a vector.

    //Accessing Elements : 
    //[] --> Undefined behavior for out of bound index , faster (no overhead)
    //.at() --> Throws exception (out of range) , little slower (due to bound checking)

    cout << "\nUsing [] : " << vec1[0] << endl;
    cout << "Using .at() : " << vec1.at(0) << endl;

    //Accessing First and Last element of a Vector:
    // {1,2,3}
    cout << "First Element using '.front()': " << vec1.front() << endl;
    cout << "Last Element using '.back()' : " << vec1.back() << endl;


    return 0;
}