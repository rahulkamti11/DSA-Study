#include <iostream>
using namespace std;

int main() {
    cout << "Take a character and check if it's a vowel or consonant." <<endl;

    char input;
    cout << "Enter any Alphabet: " ;
    cin >> input ;
    if(input=='a' || input=='e' || input=='i' || input=='o' || input=='u' || input=='A' || input=='E' || input=='I' || input=='O' || input=='U'){
        cout << "Vowel" << endl;
    }
    else cout << "Consonant" << endl;

    return 0;
}