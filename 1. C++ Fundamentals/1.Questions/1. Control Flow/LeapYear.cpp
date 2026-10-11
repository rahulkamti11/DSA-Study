#include <iostream>
using namespace std;

int main() {
    int more = 1;

    while(more==1){
    int year ;
    cout << "\n--------Leap Year or Not-------" <<endl;
    cout << "Enter the year you want to check if it is a leap year or not: ";
    cin >> year ;

    if(year%100 == 0){
        if(year%400 == 0) cout << year << " is a Leap Year" << endl;
        else cout << year << " is not a Leap Year" << endl ;
    }else{
        if(year%4==0) cout << year << " is a Leap Year" << endl ;
        else cout << year << " is not a Leap Year" << endl ;
    }

    cout << "Enter 1 to continue: " ;
    cin >> more;
}
    return 0;
}