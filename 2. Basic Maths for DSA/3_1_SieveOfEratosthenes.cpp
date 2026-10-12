#include <iostream>
using namespace std;

int main() {
    int n , count=0;
    cout << "----Sieve of Erastothenes----" <<endl;
    cout << "Enter a no. upto which you want prime of: " ;
    cin >> n ;

    //Creating an array with all it's element as one (except cell 0 and 1). 
    int arr[n]; 
    arr[0] = arr[1] = 0;
    for(int i=2 ; i<n ; i++){
        arr[i] = 1;
    }

    for(int i=2 ; i*i<n ; i++){
        if(arr[i]){
            for(int j=i*i ; j<n ; j = j+i)
            arr[j] = 0 ;
        }
    }
   
    for(int i=0 ; i<n ; i++){
        if(arr[i]){
            cout << i << " " ;
            count++;
        } 
    }
    cout << "\nCount: " << count << endl;

    return 0;
}