/* Logic :
   if a no. is divisible by any of the no. between 2 and sqrt(n) , then it is not a prime no.
   So use a loop to check if a no. is divisible or not.
*/


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n; string isPrime= "Yes";
    cout << "----Check if a no. is Prime----" << endl;
    cout << "Enter a no.: ";
    cin >> n ;
    
    if(n<2) isPrime="No"; //Less than 2 --> not prime
    else if(n>=4 && n%2==0) isPrime="No"; //If even no. (except 2) --> Not prime
    
    else{                         //Main logic to check prime
        for(int i=2 ; i<=sqrt(n) ; i++){
            if(n%i == 0) isPrime="No"; break; 
        }
    }
    cout << isPrime << endl;
    


    

}