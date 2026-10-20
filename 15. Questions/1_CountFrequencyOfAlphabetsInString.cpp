#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str ;
    int arr[123] = {0};
    int len = str.size();

    for(int i=0 ; i<len ; i++){
        int num = (int)str[i];
        arr[num] += 1; 
    }

    int freq;
    cout << "Enter the no. of characters you want to check frequency of: ";
    cin >> freq;

    char c;
    while(freq--){
        cout << "Enter a character: ";
        cin >> c;
        cout << "Total no. of " << c << " is: " << arr[(int)c] << endl ;
    }


    return 0;
}