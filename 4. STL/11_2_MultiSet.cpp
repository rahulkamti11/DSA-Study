#include <iostream>
#include <set>
using namespace std;

int main() {
    cout << "------MULTI SET (Duplicate values + Ordered) ------" <<endl;
    //Duplicate values allowed + Arrranged in Order
    
    // Methods: insert , emplace , erase , find , size , empty 
    // lowerBound : 
    // upperBound :

    multiset <int> s ;   

    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    //Trying to insert duplicates:
    s.insert(1);
    s.insert(2);

    for(auto val: s) cout << val << " " ;
    cout << endl;

    cout << "Size: " << s.size() << endl;


    return 0;
}