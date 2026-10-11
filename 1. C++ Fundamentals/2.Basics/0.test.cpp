#include <iostream>
using namespace std;

int main() {
    int a,t=1;
    while(t){
    cout << "----------ASCII Value Find---------" <<endl<< "Enter a No. between 0-127: ";
    cin >> a ;
    if(a>=0 && a<32 || a==127) cout << "This a non-printable ASCII code." << endl;
    else cout << "The ASCII value for code " << a << " is: "<< char(a) <<endl; 
    cout << "Want to continue? (Press 0 for No , 1 for Yes): ";
    cin >> t ;
    }
    


    return 0;
}