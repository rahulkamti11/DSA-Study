#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "----Armstrong No. using Digit Extraction----" <<endl;
    //An Armstrong number (or narcissistic number) is a number that is equal to the sum of its own digits, each raised to the power of the total number of digits

    cout << "Enter a no. you want to check: " ;
    int n;
    cin >> n ;
    int len = log10(n)+1 ;
    int num = n;

    int power=0 , sum=0;
    while(n>0){
        power = pow(n%10,len);
        sum = sum + power ;
        n = n/10;
    }

    cout << "Number = " << num << endl ; 
    cout << "Sum of Digits = " << sum << endl;

    if(sum == num) cout << "It is an --ARMSTRONG-- No." << endl << endl;
    else cout << "It is --NOT an ARMSTRONG-- No." << endl << endl; 
    
    return 0;
}