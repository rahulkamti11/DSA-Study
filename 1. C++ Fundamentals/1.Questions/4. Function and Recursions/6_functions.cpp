#include <iostream>
#include <math.h>
using namespace std;

int length(int num){
    int len = log10(num)+1;
    return len;
}

int passByValue(int n){
    n = n+1;
    return n;
}

int passByReference(int &m){
    m = m+1;
    return m;
}

int sumOfDigitsArray(int n){
    int len = log10(n)+1;
    int arr[len];
    int digit = n;
    int sum=0;

    for(int i = 0; i<len ; i++){
        arr[i]= digit%10;
        digit = digit/10;
    }

    for(int i = 0; i<len ; i++){
        sum= sum+arr[i];
    }
    return sum;
}

int sumOfDigitsVar(int n){
    int sum = 0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}


int main(){
    
    //--------Length of a number---------------
    cout<< "----Length of a number----\n";
    int num;
    cout << "Enter a no. : " ;
    cin >> num ;
    int len = length(num);
    cout << "This no. contains " << len << " digits" << endl;


    //-----------Pass by Value-----------------
    int n = 10;
    cout<< "\n----Pass by Value---- ";
    cout<< "\nBefore: "<< passByValue(n);
    cout<< "\nAfter: " << n ; 


    //-----------Pass by Reference-------------
    int m = 10;
    cout<< "\n\n----Pass by Reference---- "<< passByReference(m);
    cout<< "\nBefore: "<< passByReference(m);
    cout<< "\nAfter: " << m ; 


    //--------Sum of the digits of a Number--------
    cout<< "\n\n---Sum of the digits of a Number---\n";
    int a; cout<<"Enter a no.: "; cin >> a;
    cout<<"Using Array: "<< sumOfDigitsArray(a)<<endl;
    cout<<"Using Variable: "<< sumOfDigitsVar(a);

}