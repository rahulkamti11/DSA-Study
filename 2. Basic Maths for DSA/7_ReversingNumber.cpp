#include <iostream>
using namespace std;

int reverse(int n){
    int rem = 0;
    while(n>0){
        rem = rem * 10 + n%10;
        //N on reversing can become a no. which might be out of range for int
        //Below is the condition (logic) to check if thr rem is out of range or not
        if(rem > INT_MAX/10 || rem < INT_MIN/10) return 0;
        
        n = n/10;
    }
    return rem ;
}

int main() {
    cout << "----Reversing a number using digit extraction----" <<endl;
    
    int n;
    cout << "Number: " ;
    cin >> n ;
    cout << "Reverse: " << reverse(n) << endl ;

    return 0;
}