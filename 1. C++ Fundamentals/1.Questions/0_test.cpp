#include <iostream>
using namespace std;

int main(){

//Days before N days
int num,today,prev;
cout << "(Mon:1 , Tues:2 , Wed:3 , Thu:4 , Fri:5 , Sat:6 , Sun:7)";
cout << "Enter Today's Day (Enter a no.): ";
cin >> today;
cout << "Enter No. of days Before: ";
cin >> num;
prev = (num%7)+1;

}