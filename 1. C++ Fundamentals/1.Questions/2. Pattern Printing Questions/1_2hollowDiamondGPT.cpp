#include <iostream>
using namespace std;

int main() {

    int n; // size (controls height)
    cout << "Enter a no.";
    cin>> n;
    
    // Upper part
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) cout << " ";

        // Print stars and spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) cout << " ";

        // Print stars and spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
