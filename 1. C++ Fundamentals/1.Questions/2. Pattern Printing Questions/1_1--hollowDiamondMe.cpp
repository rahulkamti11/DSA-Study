#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a no.: " ;
    cin >> num ;

    if(num%2==0){
        num= num+1;
    }

    for(int i = 0 ; i< num ; i++){
        
        for(int j = 0; j<(num-1)-i ; j++){
            cout << " ";
        }

        for(int k =0 ; k<=i ; k++){
            cout << "* ";
        }
        cout<< endl;
    }

    for(int i = num ; i>0 ; i--){
        for(int j = i; j<=0 ; j--){
            cout << " ";
        }


        for(int k = i ; k>0 ; k--){
            cout << "* ";
        }
        cout<< endl;
    }
}