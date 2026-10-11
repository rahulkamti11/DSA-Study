#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels=0 , consonants=0 , numbers=0 , symbols=0;
    cout << "No. of vowels and consonant" <<endl;
    cout << "Enter a String: ";
    cin >> str ;

    for(int i=0 ; i<str.length() ; i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u' || 
           str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'O' || str[i]== 'U'){
            vowels++ ;
        }
        else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122) consonants++ ;
        else if(str[i]>= '0' && str[i]<= '9') numbers++;
        else symbols++ ;
    }

    cout << "Volwels: " << vowels << "\nConsonants: " << consonants << "\nNumbers: " << numbers << "\nSymbols: " << symbols;

    return 0;
}