#include <iostream>
#include <queue>
using namespace std;

int main() {
    cout << "-----Priority Queue------" <<endl;
    // We can assume it's layout as STACK and use stack methods to operate on it.

    // Methods : push , emplace , pop , top , empty , 

    priority_queue <int> pq ;  

    // top --> {4,3,2,1} <-- bottom  //Stored like a stack with greatest value element at the top

    pq.push(4); //{4}
    pq.push(2); //{2,4}
    pq.push(3); //{2,3,4}
    pq.push(1); //{1,2,3,4}

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }


    return 0;
}