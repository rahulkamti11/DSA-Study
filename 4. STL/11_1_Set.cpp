#include <iostream>
#include <set>

using namespace std;

int main() {
    cout << "------SET------" <<endl;
    
    //Methods: insert , emplace , erase , find , size , empty 
    // lowerBound : 
    // upperBound :

    set <int> s ;

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
    cout << "Count (1): " << s.count(1) << " <-- Present" << endl;
    cout << "Count (6): " << s.count(6) << " <-- Not Present" << endl;
    cout << "is Empty: " << s.empty() << "  <-- Not Empty" << endl;

    s.erase(4);
    cout << "New set after erase(4): " ;
    for(auto val: s) cout << val << " " ;
    cout << endl;

    auto it = s.find(1);  // iterator : points to addr. of 1 , it = s.end() if 1 not present.
    cout << "Find(1): " ;
    if(it != s.end()) cout << "1 is Present" << endl;
    else cout << "1 is Not Present" << endl;

    auto itr = s.find(4);  // iterator : points to addr. of 4 , it = s.end() if 4 not present.
    cout << "Find(4): " ;
    if(itr != s.end()) cout << "4 is Present" << endl;
    else cout << "4 is Not Present" << endl;

    
    return 0;
}