#include <iostream>
using namespace std;

int main() {
    int n , count=0 ;
    cout << "----Sieve Of Erastothenes (Code 2)----" <<endl;
    cout << "Enter the no. upto which you want primes of: " ;
    cin >> n ;

    int arr[n] = {0};    // Setting every cell as prime (0=Prime)
    arr[0] = arr[1] = 1; // Setting cell 0 and 1 as non-prime (1=Non-Prime)

    for(int i=2 ; i<n ; i++){
        if(arr[i]==0){
            for(int j=i*i ; j<n ; j=j+i){
                arr[j] = 1;
            }
        }
    }

    for(int i=2 ; i<n ; i++){
        if(arr[i]==0) {
            cout << i << " " ;
            count++;
        }
    }
    cout << "Count: " << count << endl ; 

    return 0;
}