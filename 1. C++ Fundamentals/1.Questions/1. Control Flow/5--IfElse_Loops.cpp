#include <iostream>
#include <math.h>
using namespace std;

int factorial(){
    int num1;
    cout<< "-------Factorial------\n";
    cout<< "Enter a no.: ";
    cin>> num1;

    int fact = 1;
    if(num1==0){
        cout<< "Factorial of "<< num1 << " is: " << 0 << endl;
    }
    else{
        for(int i=1 ; i<=num1 ; i++){
            fact=fact*i;
        }
        cout<< "Factorial of "<< num1 << " is: " << fact<< endl;
    }
    return 0;
}

int fibonacci(){
    int num2;
    cout<< "-------Fibonacci------\n";
    cout<< "Enter the term: ";
    cin>> num2;
    int a=0, b=1, fib=0;

    if(num2==0){
        cout << "You don't want any no. of term so no value is printed.\nTry using no. greater than 0 prefferably atleast greater than 3.";
    }else if(num2==1){
        cout << 0 ;
    }else if(num2==2){
        cout << "0, 1";
    }else{
        cout << "0, 1, ";
        for(int i=3 ; i<=num2 ; i++){
            fib = a+b;
            a=b;
            b=fib;
            cout<<fib<<", ";
        } 
        cout<<"\b\b \n";
    }
    return 0;
}

int isPrime(){

    // int num3;
    // cout<< "-------Prime Numbers------\n";
    // cout<< "Enter the term: ";
    // cin>> num3;
    // int isEven , root ;
    // if(num3==0)
    // cout<<"Enter a term no. greater than 0";
    // else{
    //     for(int i=1; i<num3 ; i++){
                
    //     }
    cout<< "-------Prime Numbers------\n";
    int num;
    cout<< "Enter a no.: ";
    cin>>num;
    int isNotPrime=0, root = sqrt(num);
    
    for(int i = 2; i<root; i++){
        if(num%i==0){
            isNotPrime = 1;
            break;
        }
    }
    if(isNotPrime==1)
    cout<< num<<" is not a prime number";
    else
    cout<< num<<" is a prime number.\n";
    return 0;
}

int prime(){
    cout<< "-------Prime Numbers------\n";
    int num;
    cout<< "Enter a no. upto which you want prime numbers of: ";
    cin>>num;
    int isNotPrime=0;

    for(int i=2; i<=num ;i++){
        for(int j=2; j<i ; j++){
            if(i%j==0){
                continue;
            }
            else{
                cout<< i << ", ";
            }
        }
    }
    cout<<"\b\b \n";
    return 0;
}

int main(){
    
    // factorial();
    // fibonacci();
    // isPrime();
    // isPrime();
    prime();

}