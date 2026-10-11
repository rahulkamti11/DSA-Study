#include <iostream>

#define pi 3.14
#define func(a,b) cout<<"Hello"<<1+2<<endl
#define hello cout<<"Hello World"<<endl
#define print(a) cout<<a
using namespace std;

int main() {
    cout << "Constants Using #define Preprocessor Macro" <<endl;
    cout << pi << endl;
    func(1,2);
    hello;
    print("Hello");

    return 0;
}