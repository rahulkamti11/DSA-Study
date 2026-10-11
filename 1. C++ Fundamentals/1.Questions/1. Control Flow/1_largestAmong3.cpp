#include <iostream>
using namespace std;

int main() {
    int a , b , c;
    cout << "\nLargest among three no.";
    cout << "\nEnter three no.: " ; 
    cin >> a >> b >> c ;

    if(a>b && a>c) cout << a ;
    else if(b>a && b>c) cout << b;
    else if(c>a && c>b) cout << c ;
    else cout << "\nNo largest no. among these three no.";

    return 0;
}