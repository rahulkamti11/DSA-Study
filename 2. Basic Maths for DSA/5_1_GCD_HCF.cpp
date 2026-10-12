#include <iostream>
using namespace std;

int main() {
    cout << "----GCD Usign Brute Force Method----" <<endl;
    //Few Facts/rules related to GCD.
    //1. If any of the two no. is 0 , then the GCD will be the another no. (if a=0 , b=n --> GCD = n).
    //2. If both the no. is 0 , then GCD is undefined.
    //3. GCD can never be greater that:
    //   a. The minimum no. between a & b ; [gcd<= min(a,b)]
    //   b. The difference between a & b; [gcd<= |a-b|]

    int a , b , gcd , min = 0, diff;
    cout << "Enter two no. you want to find GCD of: " ;
    cin >> a >> b ;

    if(a==0 || b==0){
        if(b==0) gcd = -1 ;
        else if(b!=0) gcd = b;
        else gcd = a;
    }
    else if(a==b) gcd = a;
    else{
        diff = abs(a-b);
        if(a<b && a<diff) min = a;
        else if(b<a && b<diff) min = b;
        else min = diff;

        //GCD Main Logic (Brute Force)
        for(int i=1 ; i<=min ; i++){
            if(a%i==0 && b%i==0) gcd = i;
        }
    }
    

    cout << "GCD:" << gcd << endl;
        


    return 0;
}