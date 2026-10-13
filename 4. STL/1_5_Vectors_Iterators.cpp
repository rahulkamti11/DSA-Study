#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "-----Vector Iterators-----" <<endl;
    // .begin() and .end() are pointers , they point the start and last+1 location of the array.
    
    // .begin() --> points to the first element of the array (0th index)
    // .end() --> points to nth index of the array (last element +1)
    // .rbegin() --> reverse begin (points to n-1 index) , last element of the array
    // .rend() --> reverse end (points to -1 index) , (last element -1)
    
    vector <int> vec = {1,2,3,4,5};

    cout << ".begin(): " << *(vec.begin()) << endl;
    cout << ".end(): " << *(vec.end()) << " <-- points to (last+1) mem location" << endl;
    cout << ".end()-1: " << *(vec.end()-1) << " <-- last element" << endl;

    //------ USING ITERATOR -------
    cout << "LOOP using ITERATOR: " ;
    vector <int> :: iterator it;
    for(it = vec.begin() ; it != vec.end() ; it++){
        cout << *(it) << " " ;
    }

    //------ USING REVERSE ITERATOR -------
    cout << "\n\nLOOP using REVERSE ITERATOR: " ;
    vector <int> :: reverse_iterator r_it;
    for(r_it = vec.rbegin() ; r_it != vec.rend() ; r_it++){
        cout << *(r_it) << " " ;
    }

    //------ using ITERATORS using auto keyword ------
    // Using auto , we do not need to explicitly declare the iterator variables

    cout << "\n\nUsing iterator with auto keyword:\n" ;

    cout << "Itrerator using auto: " ;
    vector <int> vec2 = {6,7,8,9,10};

    for(auto it= vec2.begin() ; it!= vec2.end() ; it++){
        cout << *(it) << " " ;
    }
    cout << endl;

    cout << "Reverse Itrerator using auto: " ;
    for(auto it= vec2.rbegin() ; it!= vec2.rend() ; it++){
        cout << *(it) << " " ;
    }
    cout << endl;





    return 0;
}