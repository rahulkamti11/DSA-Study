#include <iostream>
using namespace std;

int reverse(int n){
    int rem = 0 ;
    while(n>0){
        rem = rem * 10 + n%10 ;
        n = n/10;
    }
    return rem;
}

int main() {
    int n;
    cout << "----Palindrome Number----" <<endl;
    cout << "Enter a number: " ;
    cin >> n ;

    if(n<0) cout << "Please enter only positive no." << endl;
    else{ 
        int rev = reverse(n);
        if(n == rev) cout << "It is a Palindrome Number: " << rev << endl;
        else cout << "Not a Palindrome Number: " << rev << endl ;
    }

    return 0;
}