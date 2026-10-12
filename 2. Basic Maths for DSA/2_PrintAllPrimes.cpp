#include <iostream>
#include <math.h>
using namespace std;

/*Logic: USe two nested loops:
  Inner Loop : to check if a no. is prime or not.
  Outer Loop : to check the prime no. for 2 to n.

*/

int main() {
    int n; int isPrime=1;
    cout << "----Primes no. upto N----" <<endl;
    cout << "Enter a no. upto which you want prime of: ";
    cin >> n ;

    for(int i=2 ; i<n; i++){
        isPrime = 1;
        for(int j=2 ; j<=sqrt(i) ; j++){
            if(i%j==0){
                isPrime = 0 ; 
                break;
            }
        }
        if(isPrime == 1) cout << i << " ";
    }
    
    return 0;
}