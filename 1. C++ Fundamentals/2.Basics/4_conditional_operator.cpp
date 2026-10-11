#include <iostream>
using namespace std;

int main() {
    cout << "----Conditional Operator:(condition ? exp1 : exp2)----" << endl;

    cout << "Assignment using Conditional Operator: " << endl ;
    const int max = (1>2? 5 : 10 );
    int min = (5<10 ? 5 : 10);
    cout << "Max:" << max << " , Min:" << min << endl << endl;

    cout << "Use as shorthand of if-else:"<< endl ;
    cout << (1>2? true : false) << endl;
    cout << (1>2? "true" : "false") << endl;
    (1>2? cout << "true" : cout << "false") << endl << endl;

    cout << "Nested Conditional Operator:" << endl ;
    cout << "Using to find the largest among three numbers." << endl ;
    int a = 10 , b = 20 , c = 30 ;
    cout << ( (a > b && a > c) ? a : ((b > a && b > c) ? b : c)) << endl; 


    return 0;
}