#include <iostream>
using namespace std;

int reverse(int arr[]){
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[length-1];

    for(int i=length; i>0 ; i++){
        arr[i-1] = arr[i-2];
    }
}

int main() {
    cout << "-----Reversing an array-----" <<endl;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr);

    return 0;
}