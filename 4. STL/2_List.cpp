#include <iostream>
#include <list>
using namespace std;

int main() {
    cout << "----- LIST -----" <<endl;
    // Implemented using doubly linked list (Therefore operation can be performed from both sides).
    // Meethods:
    // 1.) push_back , push_front
    // 2.) pop_back , pop_front
    // 3.) emplace_back , emplace_front

    // Other Methods available : size, erase, insert, front, back, clear, begin, end, rbegin, rend

    list <int> L = {1,2,3,4};
    cout << "Initial: " ;
    for(int i: L) cout << i << " " ;
    cout << endl;

    L.push_back(5);
    L.push_front(0);
    cout << "Push (back, front): " ;
    for(int i: L) cout << i << " " ;
    cout << endl;

    L.pop_back();
    L.pop_front();
    cout << "Pop (back, front): " ;
    for(int i: L) cout << i << " " ;
    cout << endl;

    L.emplace_back(); // 0 default
    L.emplace_front(5);
    cout << "Emplace (back, front): " ;
    for(int i: L) cout << i << " " ;
    cout << endl;

/*
    Vector: Implemented as a dynamic array that stores elements in contiguous memory locations.
          : Random Acess using index : O(1)

    List: Implemented as a doubly-linked list where each element (node) is stored in non-contiguous memory and contains pointers to the next and previous elements.
        : Sequential Access : O(n)
*/


    return 0;
}