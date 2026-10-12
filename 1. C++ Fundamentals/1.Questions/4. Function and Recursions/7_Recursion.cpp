#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n);
int fibonacci(int n);
int prime(int n);

int main(){
    
    cout<< "Factorial: " << factorial(5);
    
    cout << "\nFibonacci Series:";
    fibonacci(5);

}

int factorial(int n){
    if (n==1)
        return 1;
    else 
        return n*factorial(n-1); 
}

int fibonacci(int n){
    int a=0 , b=1 , fib = 0;
    
    if(n==1)
    return 0;
    else if(n==2)
    return 1 ;
    else{
        cout<< 0 << ", "<< 1 << ", ";
        for(int i = 2 ; i<n; i++){
            fib = a+b;
            a = b;
            b = fib;
        cout<< fib<< ", ";
        }
        cout << "\b\b ";
    }
    
    return 0;
}
