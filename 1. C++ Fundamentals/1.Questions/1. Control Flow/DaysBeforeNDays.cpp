#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "-----Days Before N Days-----" <<endl <<endl;
    int n ,today ;
    enum days{ Monday , Tuesday , Wednesday, Thursday , Friday , Saturday , Sunday};
    int more = 1 ;


    while(more != 0){
    cout << "What day is today?" << endl;
    cout <<  "Enter in digits: (0:Mo,1:Tu,2:We,3:Th,4:Fr,5:Sa,6:Su): " ;
    cin >> today ;
    cout << "Enter N (no. of days before):"; 
    cin>> n ;
    
    int num = n;
    n = n%7 ;
    int daybefore = (today-n)%7;
    
    if(daybefore<0) daybefore = daybefore + 7 ;

    switch(daybefore){
        case 0:
            cout<<"Day before " << num << " days is Monday" << endl;
            break;
        case 1:
            cout<<"Day before " << num << " days is Tuesday" << endl;
            break;
        case 2:
            cout<<"Day before " << num << " days is Wednesday" << endl;
            break;
        case 3:
            cout<<"Day before " << num << " days is Thursday" << endl;
            break;
        case 4:
            cout<<"Day before " << num << " days is Friday" << endl;
            break;
        case 5:
            cout<<"Day before " << num << " days is Saturday" << endl;
            break;
        case 6:
            cout<<"Day before " << num << " days is Sunday" << endl;
            break;
    }

    cout << "\nWanna Continue? (Enter 0 for No or anything else for Yes): " ;
    cin >> more;
    }

    return 0;
}