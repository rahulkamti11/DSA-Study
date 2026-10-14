#include <iostream>
#include <map>
using namespace std;

int main() {
    cout << "------ MAP (key value pairs) ------" <<endl;
    //Methods: insert({key,value}) , emplace(key,value) , 
    // erase(key): erases the key and value if it exists , 
    // find(key): checks the key and access the key and value (if found returns --> iterator, if not returns --> .end()) ,
    // count(key): Checks if key exists or not (if key exixts --> 1 , if not --> 0) , 
    // size() , empty() , clear()

    //Theory: 
    // 1. syntax: map <key_DT, value_DT> objectName; 
    // 2. keys must be unique , value can be repeated.
    // 3. internaally sorted by key value.
    // 4. can be accessed or modified using the key (like an index in an array).
    // 5. it can aslo be accessed as std:pair using '.first' for 'keys' and '.second' for 'values'.
    // 6. WARNING: if we access a key that does not exist, it creates that key with default value acc. to type. i.e string : "" , int : 0 , etc.

    map <int , string> m ; //{ roll (key,unique) : student (value,not unique)}

    //Ways to insert
    m[3] = 'c';                             //{3:'c'}
    m.insert({1,"a"});                      //{1:'a' , 3:'c'}
    m.insert(pair<int,string>(2, "b"));     //{1:'a' , 2:'b' , 3:'c'}
    m.emplace(4,"d");                       //{1:'a' , 2:'b' , 3:'c' , 4:'d'}
     
    //Accessing values
    cout << m[1] << " " << m[2] << " " << m[3] << endl << endl;

    // Map is also like a pair , so we can access it like a pair using .first = key , .second = value
    cout << "Accessing as a pair: " << endl;
    for(auto i: m){
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl ;

    m.erase(4);  //{1:'a' , 2:'b' , 3:'c' , 4:'d'}  --> //{1:'a' , 2:'b' , 3:'c'}
    for(auto i: m){
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl ;
    
    auto it = m.find(1); //iterator variable , .find() returns iterable (0 , n)
    if(it != m.end()){
        cout << "Key Present" << endl;
        cout << "Key value = " << it->second << endl;  // '->' is used because 'it' is a pointer not an object.   
    } 
    else cout << "Key not present" ;


    cout << endl << m.count(1) << endl ; //returns int (1 or 0)

    return 0;
}