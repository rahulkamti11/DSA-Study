#include <iostream>
using namespace std;

int main() {
    cout << "\n--------Constants Using Enums-------\n" <<endl;
    enum gender {Male , Female , Others}; //Default {Male=0 , Female=1, Others=2 };
    enum days {Monday=1 , Tuesday=2 , Wednesday=3 , Thursday=4 , Friday=5 , Saturday=6 , Sunday=7};
    enum random {Apple , Mango=500 , Banana}; //Apple=0 , Mango=500 , Banana=501
    gender myGender = Male;
    days favDay = Sunday;

    cout << myGender << endl; //0
    cout << Female << endl;   //1
    cout << favDay << endl;   //7
    cout << Banana << endl;   //501

    return 0;
}