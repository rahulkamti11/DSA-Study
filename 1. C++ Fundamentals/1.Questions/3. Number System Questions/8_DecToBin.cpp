#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

void longMethod(int num){
    int n=num, size=0, i=0;
    
    while(n>0){
        n=n/2;
        size++;
    }

    int arr[size];

    while(num>0){
        arr[i] = num%2;
        num = num/2;
        i++;
    }

    while(i--){
        cout<< arr[i];
    }

}

void shortMethod(int num){
    int n=num, binary=0, i=0;
    
    while(n>0){
        binary = binary+((n%2)*pow(10,i));
        n=n/2;
        i++; 
    }
    cout<< binary;

}

void bitSet(int n){
    cout<< bitset<8>(n)<<endl;
}

int main() {
    int num;
    cout << "----Decimal to Binary----" <<endl;
    cout << "Enter the no. you want binary of: ";
    cin >> num;

    cout << "Binary conversion using array: ";
    longMethod(num);
    cout << "\nBinary conversion using (10^i) method: ";
    shortMethod(num);
    cout << "\nBinary conversion using <bitset>: ";
    bitSet(num);
    
}