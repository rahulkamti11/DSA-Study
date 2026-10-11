#include <iostream>
using namespace std;
int main(){

    cout << "Pattern Printing...";
    cout << "\n1st Pattern : 1 2 3 4\n";
    int n = 4;
    for(int i= 1 ; i<=4 ; i++){
        for (int j = 1; j<=4 ; j++)
            cout<< j << " ";
        cout<< endl;
    }



    cout << "\n2nd Pattern : * * * *\n";
    for(int i= 1 ; i<=4 ; i++){
        for (int j = 1; j<=4 ; j++)
            cout<< "* ";
        cout<< endl;
    }



    cout << "\n3rd Pattern : A B C D --> 1st method\n";
    string str = "ABCD";
    for(int i= 1 ; i<=4 ; i++){
        for (int j = 0; j<4 ; j++)
            cout<< str[j]<< " ";
        cout<< endl;
    }


    cout << "\n3rd Pattern : A B C D --> 2nd method\n";
    for(int i= 1 ; i<=4 ; i++){
        char ch = 'A';
        for (int j = 0; j<4 ; j++)
            cout<< str[j]<< " ";
        cout<< endl;
        ch = ch+1;
    }



    cout << "\n4th Pattern : 1 to 16 as square\n";
    int n4= 3;
    int count = 1;
    for(int i= 1 ; i<=n4 ; i++){
        for (int j = 1; j<=n4 ; j++){
            cout<< count << " ";
            count++;
        }
        cout<< endl;
    }


    int n5 = 4;
    cout << "\n5th Pattern : Upper Right Triangle using *\n";
    for(int i= 1 ; i<=n5 ; i++){
        for (int j = 1; j<=i ; j++)
            cout<< "* ";
        cout<< endl;
    }



    int n6 = 4;
    cout << "\n6th Pattern : Upper Right Triangle using integer-1\n";
    for(int i= 1 ; i<=n6 ; i++){
        for (int j = 1; j<=i ; j++)
            cout<< i << " ";
        cout<< endl;
    }

    int n7 = 5;
    char c = 'A';
    cout << "\n7th Pattern : Upper Right Triangle using alphabets\n";
    for(int i= 1 ; i<=n7 ; i++){
        for (int j = 1; j<=i ; j++)
            cout<< c << " ";
        cout<< endl;
        c++;
    }


    int n8 = 4;
    cout << "\n8th Pattern : Upper Right Triangle using integer-2\n";
    for(int i= 1 ; i<=n8 ; i++){
        for (int j = 1; j<=i ; j++)
            cout<< j << " ";
        cout<< endl;
    }
    

    int n9 = 4;
    cout << "\n9th Pattern : Upper Right Triangle using integer-3\n";
    for(int i= 1 ; i<=n9 ; i++){
        int p = n9;
        for (int j = 1; j<=i ; j++){
            cout<< p << " ";
            p--;
        }
        cout<< endl;
    }


    int n10 = 4;
    cout << "\n10th Pattern : Upper Right Triangle using integer-4\n";
    for(int i= 1 ; i<=n10 ; i++){
        for (int j = i; j>0 ; j--){
            cout<< j << " ";
        }
        cout<< endl;
    }


    int n11 = 4;
    count = 1;
    cout << "\n11th Pattern : Upper Right Triangle using integer-5\n";
    for(int i= 1 ; i<=n11 ; i++){
        for (int j = 1; j<=i ; j++){
            cout<< count<< " ";
            count++;
        }
        cout<< endl;
    }

    int n12 = 4;
    cout << "\n12th Pattern : Lower Right Triangle using integer-4\n";
    for(int i= 1 ; i<=n12 ; i++){
        for (int j = n12-i; j>=0 ; j--){
            cout<< i << " ";
        }
        cout<< endl ;
        for(int k = i; k>0;k--)
        cout<< "  ";
    }

    //1111
    // 222
    //  33
    //   4



}