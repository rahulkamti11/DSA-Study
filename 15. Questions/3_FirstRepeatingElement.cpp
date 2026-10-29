#include <iostream>
#include <vector> 
#include <unordered_map>
using namespace std;

int main() {
    cout << "First Repeating Element" <<endl;

    vector <int> vec = {1,2,3,4,5,67,78,23,2,3,23};
    unordered_map <int,int> mp;
    for(auto i: vec){
        if(mp[i]==0) mp[i]++;
        else {
            cout << "The first repeating element is: " << i;
            break;
        }
    }


    return 0;
}