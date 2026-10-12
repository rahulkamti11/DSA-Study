#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    return (a==0? b : a);
}

int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

int main() {
    cout << "\n-----LCM-----" <<endl;
    //LCM and GCD of two numbers relation:
    // a*b = lcm(a,b) * gcd(a,b)
    // => lcm(a,b) = a*b/gcd(a,b)

    int a , b ;
    cout << "Enter no. you want LCM of: " ;
    cin >> a >> b ;
    cout << "LCM: " << lcm(a,b) << endl;

    return 0;
}