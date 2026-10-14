#include <iostream>
#include <queue>
using namespace std;

int main() {
    cout << "----- QUEUE (FIFO) -----" <<endl;
    // push() , emplace() , pop() , size() , empty()
    // front(): returns front/first element of the stack
    // swap(): swaps all elements between two queues

    // NOTE : Queue stores element horizontally (left to right)

    // Insertion happens from back (right side) 
    // Deletion and Access happens from front (left side)

    // stack <int> s = {1,2,3} --> intialisation is not possible during creation.

    queue <int> q ;
    q.push(1);           // {1} 
    q.push(2);           // {1,2}
    q.emplace(3);        // {1,2,3}
    q.emplace(4);        // {1,2,3,4}
    q.pop();             // {2,3,4}
    
    //for(int i: s ) cout << i << " " ; (invalid, only front is accessible)

    cout << "Size: " << q.size() << endl;        // 3
    cout << "is Empty?: " << q.empty() << endl;  // 0 (false)

    // front --> {1,2,3} <-- back
    cout << "Front: " << q.front() << endl ;      // 1 : returns top/last element 

    //Printing all elements of the stack
    cout << "Printing elements from Front (2,3,4): ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    queue <int> q1, q2 ;
    q1.push(1);
    q1.push(2);

    q2.push(3);
    
    cout << "Size q1 (before swap): " << q1.size() << endl;
    cout << "Size q2 (before swap): " << q2.size() << endl;
    q1.swap(q2);
    cout << "Size q1 (after  swap): " << q1.size() << endl;
    cout << "Size q2 (after  swap): " << q2.size() << endl;
    return 0;
}