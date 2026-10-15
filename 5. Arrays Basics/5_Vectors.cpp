#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Vectors Declaration and Initialisation" <<endl;
    // 1. vector <datatype> variableName;
    // variableName = {...};
    // 2. vector <datatype> variableName = {...};
    // 3. vector <datatype> variableName(size,element);

    //Method 1
    vector <int> vec1;
    vec1 = {1,2,3,4,5};
    cout << vec1[0]<< "," << vec1[1] << "," << vec1[2] << "," << vec1[3] << "," << vec1[4] << endl;

    //Method 2
    vector <int> vec2 = {1,2,3,4,5};
    cout << vec2[0]<< "," << vec2[1] << "," << vec2[2] << "," << vec2[3] << "," << vec2[4] << endl; 

    //Method 3
    vector <int> vec3(5,0);
    cout << vec3[0]<< "," << vec3[1] << "," << vec3[2] << "," << vec3[3] << "," << vec3[4] << endl;

    cout << "\n----for each loop----" <<endl;
    //for each loop 
    //for(datatype tempVar : VectorVar){...}
    vector <int> vec4 = {10,11,12,13,14,15};
    vector <char> vec5 = {'H','e','l','l','o'};

    for(int val : vec4){
        cout<< val << " ";
    }
    cout << endl;
    for(char val : vec5){
        cout<< val ;
    }

    cout << "\n\n----Vector Functions----" <<endl;
    // size(), push_back() , pop_back() , front() , back() , at() , capacity() , at()
    //syntax: vectorVariableName.function(parameter?)
    //Examples
    vector <int> vec6 = {1,2,3,4};
    cout << "\nOriginal Size: " << vec6.size() << endl; // 1. size()
    for(int val : vec6){
        cout<< val << " ";
    }
    
    vec6.push_back(5); // 2. push_back()
    vec6.push_back(6);
    cout << "\n\nAfter pushing 2 elements, Size: " << vec6.size() << endl; // 1. size()
    for(int val : vec6){
        cout<< val << " ";
    }

    vec6.pop_back(); // 3. pop_back()
    cout << "\n\nAfter popping 1 element, Size: " << vec6.size() << endl; // 1. size()
    for(int val : vec6){
        cout<< val << " ";
    }

    cout << "\n\nFirst Element: " << vec6.front() << endl; // 4. front()

    cout << "Last Element: " << vec6.back() << endl; // 5. back()

    cout << "Element at index 2: " << vec6.at(2) <<endl; // 6. at()


    //capacity() function --> Internal capacity of the vector array inside heap memory 
    //array size is doubled (x2)(2^n) when the size of the vector array becomes greater than the capcity of the vector array
    cout << "\n\n-----capacity() function-----"<< endl ;
    vector <int> vec7;
    cout << "\nIntial Size: " << vec7.size(); //0
    cout << "\nIntial capacity: " << vec7.capacity(); //0

    vec7.push_back(1);
    cout << "\n\nSize after 1 element is pushed: " << vec7.size(); //1
    cout << "\nCapacity after 1 element is pushed: " << vec7.capacity(); //1

    vec7.push_back(2);
    cout << "\n\nSize after 2 element is pushed: " << vec7.size(); //2
    cout << "\nCapacity after 2 element is pushed: " << vec7.capacity(); //2

    vec7.push_back(3);
    cout << "\n\nSize after 3 element is pushed: " << vec7.size(); //3
    cout << "\nCapacity after 3 element is pushed: " << vec7.capacity(); //4

    vec7.push_back(4);
    cout << "\n\nSize after 4 element is pushed: " << vec7.size(); //4
    cout << "\nCapacity after 4 element is pushed: " << vec7.capacity(); //4

    vec7.push_back(5);
    cout << "\n\nSize after 5 element is pushed: " << vec7.size(); //5
    cout << "\nCapacity after 5 element is pushed: " << vec7.capacity(); //8



    return 0;
}