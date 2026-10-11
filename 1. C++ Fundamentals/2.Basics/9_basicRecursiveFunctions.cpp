/* Structure:
       return_type func_name(params){
           if(termination_condition){
               return some_value;
           }
           else{     //recursive statement
               return func_name(modified_params);
           }
       }
*/

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    else{
        return n*factorial(n-1);
    }
}

int main() {
    cout << "-----Recursive Functions-----" <<endl;
    int n =0 ;

    cout << "Enter a no. you want factorial of: ";
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial of " << n << " is " << fact <<endl;
    return 0;
}