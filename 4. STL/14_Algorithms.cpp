#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Some More Inbuilt Functions in C++ STL" <<endl;
    // NOTE: The algorithms are special function , they are not methods , so we don't need to use it with '.' , e.g. vec.reverse() --> WRONG , reverse() --> CORRECT

    // 1. reverse(v.begin(),v.end()) : Reverses the array
    // 2. next_permutation(v.begin(),v.end()) 
    // 3. prev_permutation(v.begin(),v.end())
    // 4. swap(value1, value2) : swap b/w two values
    // 5. min(value1,value2) , max(value1,value2) : finds min and max betwen two values
    // 6. min_element(v.begin(),v.end()) : finds min in an array
    // 7. max_element(v.begin(),v.end()) : finds max in an array
    // 8. binary_search(v.begin(),v.end(),target) : returns 1 if present.
    // 9. __builtin_popcount(number) : counts set bit

    // reverse() : 
    // Reversing complete array
    vector <int> vec1 = {1,2,3,4,5};
    reverse(vec1.begin(), vec1.end()) ; 
    for(auto i: vec1) cout << i << " " ;
    cout << endl;

    // Reversing array in a range
    vector <int> vec2 = {1,2,3,4,5};
    reverse(vec2.begin()+1, vec2.end()-2) ;  // {1,2,3,4,5} --> {1,3,2,4,5}
    for(auto i: vec2) cout << i << " " ;
    cout << endl;


    //Next Permutation  --> Lexiographical order
    string s1 = "ABC" ; //{ABC, ACB, BAC, BCA, CAB, CBA }
    next_permutation(s1.begin(),s1.end());
    cout << s1 << endl;

    vector <int> vec3 = {1,2,3} ; //{123, 132, 213, 231, 312, 321}
    next_permutation(vec3.begin(),vec3.end());
    for(auto i: vec3) cout << i << " ";
    cout << endl;

    //Previous Permutation  --> Lexiographical order
    string s2 = "ABC" ; //{ABC, ACB, BAC, BCA, CAB, CBA }
    prev_permutation(s2.begin(),s2.end());
    cout << s2 << endl;

    vector <int> vec4 = {1,2,3} ; //{123, 132, 213, 231, 312, 321}
    prev_permutation(vec4.begin(),vec4.end());
    for(auto i: vec4) cout << i << " ";
    cout << endl;


    // Swap b/w two values
    int a = 5 , b = 10;
    swap(a,b);
    cout << a << " " << b << endl;

    // Min and Max
    cout << "Min(5,10): " << min(5,10) << "\nMax(5,10): " << max(5,10) << endl ;

    //Min Max Element 
    vector <int> vec5 = {21,43,91,325,343,11,90};
    cout << "Min Element: " << *(min_element(vec5.begin(),vec5.end())) << endl ;
    cout << "Max Element: " << *(max_element(vec5.begin(),vec5.end())) << endl;

    //Binary Search (Array must be sorted)
    vector <int> sortedArray = {2,4,7,12,43,76,92};
    cout << binary_search(sortedArray.begin(),sortedArray.end(),76 ) << endl;

    //Count set bits
    cout << "Count set bits: " << endl;
    cout << __builtin_popcount(10) << endl ; // 1010 --> 2
    cout << __builtin_popcountl(100000) << endl ; // 1010 --> 2
    cout << __builtin_popcountll(10000000) << endl ; // 1010 --> 2


    return 0;
}