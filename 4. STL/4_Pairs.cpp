#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "----Pairs (utility class) nothing extra needed to be included ----" <<endl;

    pair <int,int> p1 = {1,2};
    pair <float,float> p2 = {1.1 , 2.2};
    pair <char, char> p3 = {'a','b'};
    pair <string,string> p4 = {"rahul", "kamti"};
    pair <int,char> p5 = {1,'a'};
    pair <int , string> p6 = {1,"apple"};

    //nested pair 
    pair <int , pair< char, string>> p7 = {1,{'a',"apple"}};
    pair <pair<int,int>, pair<int,int>> p8 = {{1,2},{3,4}};

    //Accessing an element of a pair
    // .first , .second , .first.first , .first.second , etc.
    cout << p1.first << " " << p1.second << endl;
    cout << p7.first << " " << p7.second.first << " " << p7.second.second <<endl;
    cout << p8.first.first << " " << p8.first.second << " " << p8.second.first << " " << p8.second.second <<endl;

    // Vector of pair datatype
    vector <pair<int,int>> PairVector1 = {{1,2},{3,4},{5,6}};
    vector <pair<char,string>> PairVector2 = {{'a',"apple"},{'b',"ball"},{'c',"cat"}};

    cout << "\nPair Vector <int,int>: " << endl;
    for(pair<int,int> i : PairVector1) cout << i.first << " " << i.second << endl;
    
    cout << "\nPair Vector <char,string>: " << endl;
    for(auto i : PairVector2) cout << i.first << " " << i.second << endl;


    //Push vs Emplace for vector pair
    vector <pair<int,int>> vecPair ;
    vecPair.push_back({1,2}); 
    //vecPair.push_back(1,2); --> error, not supported

    vecPair.emplace_back(3,4);  //--> no error (auto inference pair type)
    //in-place objects create

    return 0;
}