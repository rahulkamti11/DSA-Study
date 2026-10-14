#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

int main() {
    cout << "------ Sorting (.sort()) ------" <<endl;
    //Syntax : sort(start, end+1)
    
    // C-style array
    int arr1[5] = {3,2,4,5,1};

    cout << "Before Sorting: " ; 
    for(auto i: arr1) cout << i << " " ;
    cout << endl;

    sort(arr1, arr1+5);

    cout << "After Sorting: " ;
    for(auto i: arr1) cout << i << " " ;
    cout << endl << endl;

    // std::array / stl <array> / C++ array
    array <int,5> arr2= {8,9,7,10,6};

    cout << "Before Sorting: " ;
    for(auto i: arr2) cout << i << " " ;
    cout << endl;

    sort(arr2.begin(), arr2.end());

    cout << "After Sorting: " ;
    for(auto i: arr2) cout << i << " " ;
    cout << endl << endl;

    // std::vector / stl <vector> / vector
    vector <int> vec1= {14,15,13,12,11};

    cout << "Before Sorting: " ;
    for(auto i: vec1) cout << i << " " ;
    cout << endl;

    sort(vec1.begin(), vec1.end());

    cout << "After Sorting: " ;
    for(auto i: vec1) cout << i << " " ;
    cout << endl << endl;


    //Reverse Sort
    vector <int> vec2 = {34, 453, 212 , 242 , 12} ;

    cout << "Before Sorting: " ;
    for(auto i: vec2) cout << i << " " ;
    cout << endl;

    sort(vec2.begin() , vec2.end() , greater<int>() );

    cout << "After Sorting: " ;
    for(auto i: vec2) cout << i << " " ;
    cout << endl << endl;
    


    return 0;
}