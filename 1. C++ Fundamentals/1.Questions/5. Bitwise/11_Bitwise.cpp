#include <iostream>
using namespace std;

int main() {
    cout << "Bitwise Operator:" <<endl;
    cout << "&   - and" << endl;
    cout << "|   - or" << endl;
    cout << "^   - xor" << endl;
    cout << "<<  - left shift" << endl;
    cout << ">>  - right shift" << endl;

    cout << "\n\nBitwise Operations: \n" ;
    cout << "6 & 10 = " << (6 & 10) << endl;
    cout << "6 & 10 = " << (6 | 10) << endl;
    cout << "6 & 10 = " << (6 ^ 10) << endl;

    cout << "\nBitwise Shift Operations: \n";
    cout << "10 << 2 = " << (10<<2) << endl;
    cout << "10 >> 2 = " << (10>>2) << endl;

    return 0;
}