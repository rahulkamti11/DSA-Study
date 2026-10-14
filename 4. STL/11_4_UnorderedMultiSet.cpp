#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cout << "------UNORDERED MULTI SET (UnOrdered + Duplicates) ------" <<endl;
    // UnOrdered + Duplicate values allowed
    
    // Methods: insert , emplace , erase , find , size , empty 
    // lowerBound : Not Exists as Not in Sorted Form
    // upperBound : Not Exists as Not in Sorted Form

    unordered_multiset <int> s ;   

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