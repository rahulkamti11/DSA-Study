//Vector Methods/Algorithms:
    // size() --> current no. of elements in the array(vector)

    // capacity() --> current no. of cells (empty/filled) in the array(vector)
    //--> capacity of the array doubles 1->2->4->8->16... or 3->6->12->24 ...

    // push_back() --> pushes 1 element at the end
    // pop_back()  --> pops 1 element from the end
    // emplace_back()  --> similar to push_back and ....
    
    // at() , []  -->  used to access element
    // front() , back()  --> used to access first and last element of the vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "-----STL VECTORS (Intializations, Insertion, Deletion)-----" <<endl;

    //Initialisation 

    vector <int> vec1;   //Vector Declaration
    vector <int> vec2 = {1,2,3};  //Declaration + Initilisation
    vector <int> vec3(3,1);  // {1,1,1}   //Initialising 3 cells with value 1
    vector <int> vec4(vec3); // Copying vec3 in vec4

    // 1) .push_back() --> pushes 1 element at the end
    // 2) .pop_back()  --> pops 1 element from the end
    // 3) .emplace_back()  --> can be used to push multiple values at once and (if nothing is passed , default value 0)....

    cout << endl << "push_back:" ;
    vec1.push_back(1);
    for(int i: vec1) cout << i << " " << endl;

    vec1.push_back(2);
    vec1.push_back(3);
    for(int i: vec1) cout << i << " ";

    cout << endl << "pop_back:" << endl;
    vec1.pop_back(); //pops last element
    for(int i: vec1) cout << i << " ";

    cout << endl;
    vec1.pop_back();
    for(int i: vec1) cout << i << " ";

    cout << endl << "emplace_back:" << endl;
    vec1.emplace_back();  // 0 is passed as default value.
    vec1.emplace_back(3);
    for(int i: vec1) cout << i << " ";

    

    return 0;
}