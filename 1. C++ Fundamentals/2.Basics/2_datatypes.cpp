#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
    int i = 1;

    double d = 1.123456789;
    float f = 1.123456789;
    char c = 'c';
    string s = "string";
    bool b = true; //1

    cout<< "integer: "<< i << endl;
    cout<< "float: " << f << endl;
    cout<< "char: "<< c << endl;
    cout<< "string: "<< s << endl;
    cout<< "bool: "<< b << endl;



    cout<< "\n\n-------double data type--------"<< endl;
    cout<< "double(C++): "<< d << endl; //total of 6 digitd by default in C++
    cout<< "double(C++): "<< fixed  << setprecision(9) << d << endl; //9 digits after decimal(.)
    cout<< "double(C++): "<< setprecision(9) << d << endl; //9 digits (before & after decimal)

    printf("double(C): %lf\n",d); //total of 6 digits after decimal(.) by default in C++
    printf("double(C): %.9lf\n",d);


}