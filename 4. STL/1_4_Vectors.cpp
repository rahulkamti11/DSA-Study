    //Note: 
    //1. always use vec.begin() , vec.end() to point to an index
    //2. these mehtods changes the size , but the capacity remains unchanged.


    //1) .erase(start,end): mainly used to remove elements in a range.
    //               |--> end is optional and it is excluded.

    //2) .insert(pos,val): inserts element at a particular index

    //3) .clear(): clears the vector (deletes all element of the vector)
   
    //4) .empty() : checks, is the array empty or not: empty-->1 , not empty-->0

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "-----Vector methods-----" <<endl;

    vector <int> vec = {1,2,3,4,5,6,7,8,9,10};
    for(int i: vec) cout << i << " " ;
    cout << endl;

    //erasing a range
    vec.erase(vec.begin()+7, vec.end()) ;
    for(int i: vec) cout << i << " " ;
    cout << endl;

    //erasing a single value
    vec.erase(vec.begin()+2) ;
    for(int i: vec) cout << i << " " ;
    cout << endl;

    //Inserting a value
    vec.insert(vec.begin()+2,3);  
    for(int i: vec) cout << i << " " ;
    cout << endl;

    //Clearing the vector 
    vec.clear();
    for(int i: vec) cout << i << " " ;
    cout << "Vector cleared..." << endl;

    //Checking if a vector is empty (1/0)
    cout << vec.empty() << " <-- 1(true) means yes the vector is empty";
    cout << endl;

    vec.push_back(1);
    cout << vec.empty() << " <-- 0(false) means no the vector is not empty";
    cout << endl;
    
    return 0;
}