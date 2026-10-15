#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Unique no. in an Array" <<endl;

    vector <int> a = {2,2,3,4,3,4,5,5,6,8,9,9,8} ;
    int count ;

    cout << "---Answer in square time complexity (Using nested for loops {2 for loops})---\n";
    for(int i=0 ; i<a.size() ; i++){
        count = 0;
        for(int j = 0 ; j<a.size() ; j++){
            if(i!=j){
                if(a[i]==a[j])
                count++;
            }
        }
        if(count == 0){
            cout<< "For loops: " <<a[i];
            break;
        }
    }

    cout << "\n---Answer in linear time complexity using XOR {1 for loop})---\n";
    int ans = 0;
    for(int i: a){
        ans = ans^i;
    }
    cout << "XOR: " << ans;


    return 0;
}