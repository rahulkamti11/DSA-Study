#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,pos,bin=0,i=0,len,new_bin,Ones,bit;

    cout << "----Binary of a Negative Number----" <<endl;
    cout << "Enter a negative no.: ";
    cin >> n;
    
    pos = abs(n);
    while(pos>0){
        bin = bin+ ((pos%2)*pow(10,i));
        pos = pos/2;
        i++;
    }
    cout<< "Binary of Positive: "<< bin;

    len = log10(bin)+1;
    int arr[len+1];
    arr[0]=0;
    for(int i=len; i>0 ; i--){ 
        Ones = bin%10;
        bin = bin/10;

        if(Ones==0){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
    }

    // if(arr[len]==0)
    //         arr[len]=1;
    // else{
    //     for(int i=len ; i>=0 ; i--){
    //         //Code for 2s complement
    //     }
    // }
    

    cout<< "\nOne's Complement: " ;
    for(int i=0; i<=len ; i++){ 
        cout <<arr[i];
    }


    return 0;
}