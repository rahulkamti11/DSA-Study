#include <iostream>
#include <stack>
using namespace std;

int main() {
    cout << "----- STACK (LIFO) -----" <<endl;
    // push() , emplace() , pop() , size() , empty()
    // top(): return top element of the stack
    // swap(): swaps all elements between two stacks

    // NOTE : Stack stores element vertically (bottom to top)

    // Insertion , Deletion and Access happens from top only (one at a time)

    // stack <int> s = {1,2,3} --> intialisation is not possible during creation.

    stack <int> s ;
    s.push(1);           // {1} 
    s.push(2);           // {2,1}
    s.emplace(3);        // {3,2,1}
    s.emplace(4);        // {4,3,2,1}
    s.pop();             // {3,2,1}
    
    //for(int i: s ) cout << i << " " ; (invalid, only top is accessible.

    cout << "Size: " << s.size() << endl;     // 3
    cout << "is Empty?: " << s.empty() << endl;    // 0 (false)

    // top --> {3,2,1} <-- bottom
    cout << "Top: " << s.top() << endl ;      // 3 : returns top/last element 

    //Printing all elements of the stack
    cout << "Printing elements from Top (3,2,1): ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    stack <int> s1, s2 ;
    s1.push(1);
    s1.push(2);

    s2.push(3);

    cout << "Size s1 (before swap): " << s1.size() << endl;
    cout << "Size s2 (before swap): " << s2.size() << endl;
    s1.swap(s2);
    cout << "Size s1 (after  swap): " << s1.size() << endl;
    cout << "Size s2 (after  swap): " << s2.size() << endl;

    return 0;
}