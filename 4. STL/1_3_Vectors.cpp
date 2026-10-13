#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "-----STL VECTORS (Size and Capacity Behaviour)-----" <<endl;

    //Initialisation 

    vector <int> vec1;   //Vector Declaration
    vector <int> vec2 = {1,2,3};  //Declaration + Initilisation
    vector <int> vec3(3,1);  // {1,1,1}   //Initialising 3 cells with value 1
    vector <int> vec4(vec3); // Copying vec3 in vec4

    cout << "Vector 2: " ;
    for(int i : vec2) cout << i << " " ;
    cout << endl << "Vector 3: ";
    for(int i : vec3) cout << i << " " ;
    cout << endl << "Vector 4: ";
    for(int i : vec4) cout << i << " " ;
    cout << endl << endl << "Vector 1: " << endl;

    
    cout << "Size: " << vec1.size() << endl ;    //0
    cout << "Capacity: " << vec1.capacity() << endl; //0

    vec1.push_back(1);
    cout << "Size: " << vec1.size() << endl ;    //1
    cout << "Capacity: " << vec1.capacity() << endl; //1

    vec1.push_back(2);
    cout << "Size: " << vec1.size() << endl ;    //2
    cout << "Capacity: " << vec1.capacity() << endl; //2

    vec1.push_back(3);
    cout << "Size: " << vec1.size() << endl ;    //3
    cout << "Capacity: " << vec1.capacity() << endl; //4
    //vec1 = {1,2,3, }  size=3 , capacity=4;

    cout << "Vector 2 ka intial size: " << vec2.size() << endl;
    cout << "Vector 2 ka intial capacity: " << vec2.capacity() << endl;

    vec2.push_back(4);
    cout << "Vector 2 ka size (after pushing 1 element): " << vec2.size() << endl;
    cout << "Vector 2 ka capacity (after pushing 1 element): " << vec2.capacity() << endl;

    cout << "Current Elements of Vector 2   : " ;
    for (int i: vec2) cout << i << " " ;

    vec2.pop_back();
    cout << endl << "Elements of Vector 2 after pop : ";
    for (int i: vec2) cout << i << " " ;

    

    
    


    
    

    


    return 0;
}