#include <iostream>
using namespace std;

int overloadFunc(){
    cout << "Overload function 1: No argument" << endl;
    return 0;
}

int overloadFunc(int a){
    cout << "Overload function 2: int a" << endl;
    return 0;
}

int overloadFunc(int a , int b){
    cout << "Overload function 3: int a , int b" << endl;
    return 0;
}

int overloadFunc(float a){
    cout << "Overload function 4: float a" << endl;
    return 0;
}

int overloadFunc(double a){
    cout << "Overload function 5: double a" << endl;
    return 0;
}

int overloadFunc(int a, float b){
    cout << "Overload function 6: int a, float b" << endl;
    return 0;
}

int overloadFunc(float a, int b){
    cout << "Overload function 7: float a, int b" << endl;
    return 0;
}

int main() {
    cout << "-----Function Overloading-----" <<endl;
    overloadFunc();
    overloadFunc(1);
    overloadFunc(1,2);
    overloadFunc(1.1f);
    overloadFunc(1.1);
    overloadFunc(1,1.1f);
    overloadFunc(1.1f,1);

    return 0;
}