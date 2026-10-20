#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    cout << "Frequency Count Using Unordered Map" <<endl;
    
    vector <int> vec = {1,2,3,4,1,2,3,4,5,6,1,2,5,6,7,8,9,3,2,1};

    unordered_map <int,int> mp;

    for(auto i: vec){
        mp[i]++;
    }

    for(auto i: mp){
        cout << i.first << ": " << i.second << endl;
    }


    return 0;
}