#include <iostream>
using namespace std;

int gcdFunc1(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else if(b>a) b = b%a;
    }

    return (a==0? b : a);
}

int gcdFunc2(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdRecursion(int a , int b){
    if(b==0) return a;
    return gcdRecursion(b,a%b);
}

int main() {

    // Euclid's Algo : Recursively repeat the below process until any one variable is 0.
    // for gcd(a,b)
    // if a>b --> gcd(a-b, a);
    // else if b>a --> gcd(a,b-a);
    // after few iterations any one varibale will be 0 , the another variable will be gcd.
    // i.e. if a==0 , gcd=b 


    int a , b;
    cout << "----Finding GCD/HCF Using Euclid's Algorithm----" <<endl;
    cout << "Enter the two numbers you want GCD of: " ; 
    cin >> a >> b ;
    if(a==0 && b==0) return -1 ;
    else if(a==0) return b;
    else if(b==0) return a;

    //GCD using loop using raw logic (very inefficient and slow)
    bool zero = true;
    while(zero){
        if(a>=b) a = a-b;
        else if(b>a) b = b-a;
        zero = !( a==0 || b==0);
    }
    int gcd = (a<=0? b : a);
    cout<< "\n---GCD using loop using raw logic---" << endl;
    cout << "GCD: " << gcd << endl;

    //GCD using fucntion1 (gcdFunc1())
    cout << "\n---GCD using fucntion1 (gcdFunc1)---" << endl;
    cout << "GCD: " << gcdFunc1(a,b) << endl;

    //GCD using fucntion1 (gcdFunc2())
    cout << "\n---GCD using fucntion1 (gcdFunc2)---" << endl;
    cout << "GCD: " << gcdFunc2(a,b) << endl;

    //GCD using recursion (gcdRecursion)
    cout << "\n---GCD using recursion (gcdRecursion())---" << endl;
    cout << "GCD: " << gcdFunc1(a,b) << endl;

 






    return 0;
}