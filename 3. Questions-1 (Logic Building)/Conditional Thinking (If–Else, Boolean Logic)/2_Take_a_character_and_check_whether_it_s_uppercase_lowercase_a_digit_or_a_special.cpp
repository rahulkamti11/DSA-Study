#include <iostream>
using namespace std;

int main() {
    cout << "Take_a_character_and_check_whether_it_s_uppercase_lowercase_a_digit_or_a_special" <<endl;
    
    char c ;
    cout << "Enter any character or symbol: " ; 
    cin >> c ;
    if(c>=65 && c<= 90) cout << c << " : Uppercase Alphabet" << endl;
    else if(c>=97 && c<=122) cout << c << " : Lowercase Alphabet" << endl;
    else if(c>=48 && c<=57) cout << c << " : Digit";
    else cout << c << " : Special Symbol";

    return 0;
}