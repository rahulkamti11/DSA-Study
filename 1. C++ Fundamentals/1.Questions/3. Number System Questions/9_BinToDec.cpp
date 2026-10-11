#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, len, temp, decimal=0  ;

    cout << "----Binary to Decimal----" <<endl;
    cout << "Enter a binary no.: ";
    cin >> n;
    len = log10(n)+1;

    for(int i = 0; i<len ; i++){
        temp=n%10;
        decimal= decimal+ temp*pow(2,i);
        n = n/10;
    }
    
    cout<< "Decimal Value: " << decimal;


    return 0;
}