#include <iostream>
using namespace std;

int main() {
    cout << "-----Array Traversal-----" <<endl;
    int arr[]={0,1,2,3,4,5,6,7,8,9};

    cout << "\n----Traversing through all elements----\n";
    for(int i: arr) cout << i << " " ;

    cout << "\n\n----Traversing through even index elements----\n";
    for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]); i++) if(i%2==0){cout << arr[i] << " " ;}

    cout << "\n\n----Traversing through odd index elements----\n";
    for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]); i++) if(i%2!=0){cout << arr[i] << " " ;}

    cout << "\n\n----Traversing through array in reverse order----\n";
    for(int i=sizeof(arr)/sizeof(arr[0])-1 ; i>=0; i--) {cout << arr[i] << " " ;}





    return 0;
}