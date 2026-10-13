#include <iostream>
#include <deque>
using namespace std;

int main() {
    cout << "----- Deque (Double Ended Queue) -----" <<endl;
    // Implemented using dynamic array (Operation can be performed from both sides).
    // Methods:
    // 1.) push_back , push_front
    // 2.) pop_back , pop_front
    // 3.) emplace_back , emplace_front

    // Other Methods available : size, erase, insert, front, back, clear, begin, end, rbegin, rend

    deque <int> DEQ = {1,2,3,4};
    cout << "Initial: " ;
    for(int i: DEQ) cout << i << " " ;
    cout << endl;

    DEQ.push_back(5);
    DEQ.push_front(0);
    cout << "Push (back, front): " ;
    for(int i: DEQ) cout << i << " " ;
    cout << endl;

    DEQ.pop_back();
    DEQ.pop_front();
    cout << "Pop (back, front): " ;
    for(int i: DEQ) cout << i << " " ;
    cout << endl;

    DEQ.emplace_back();  // 0 default
    DEQ.emplace_front(5);
    cout << "Emplace (back, front): " ;
    for(int i: DEQ) cout << i << " " ;
    cout << endl;


    // Random Access:
    cout << "Random Access: " << DEQ[0] << " " << DEQ[1] << " " << DEQ[2] ;

/*
    vector: Implemented as a dynamic array that stores elements in contiguous memory locations.
          : Random Access using index : O(1)

    list: Implemented as a doubly-linked list where each element (node) is stored in non-contiguous memory and contains pointers to the next and previous elements.
        : Sequential Access : O(n)

    deque: A "double-ended queue" implemented as a sequence of fixed-size memory blocks (chunks) linked together
         : Random Access available
         : It is Mix of Vector and List (Double sided ops + random access)
*/


    return 0;
}