#include <iostream>
using namespace std;

/*Syntax :
  
returnType funcName(parameter=defaultValue,...){
    //statement
    return value;
}
*/

int func1();   //function 1 declaration

int func2(int a , int b); //function 2 declaration

int func3(int a , int b){  //empty function , defined function (as '{}' are used)
    //Undefined behavior or error because...
    //...this is empty function but return type is int and not null. 
    //Without return statement , the flow control will not return back to the main function.
}

void func4(){  //Null Function , Defined function

}

int func4(int a){   //Function with a return statement
    return a;
}

int func1(int a){   // Overloaded function , Overloading of func1()
    return 0;
}

int sum(int a, int b){
    cout << "Sum " << a << "+" << b << ": " << a+b << endl;
    return 0;
}

int defaultParameters1(int a=5 , int b=5){  //Default Parameters
    cout << "Default Parameters (a=5, b=5): " << a << " " << b << endl;
    return 0;
}

int defaultParameters2(int a, int b=5){  //Default Parameters
    cout << "Default Parameters (a, b=5): " << a << " " << b << endl;
    return 0;
}

// int defaultParameters(int a=5 , int b){  //Default Parameters   //----> Not Allowed
//     cout << "Default Parameters (a=5, b): " << a << " " << b;
// }



int main() {
    cout << "----Functions and Default Parameters----" <<endl;
    sum(1,2);
    defaultParameters1(1,2);
    defaultParameters1();
    defaultParameters2(1);

    return 0;
}