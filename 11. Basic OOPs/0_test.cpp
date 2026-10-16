#include <iostream>
using namespace std;

class Animal{
    public:
        string name;
        string type;

        void setValues(string name, string type){
            this->name = name;
            this->type = type;
        }

        void getValues(){
            cout << "Animal Type: " << type << endl;
            cout << type << " Name: " << name << endl;
        }

        Animal(){}
        Animal(Animal &obj){
            this->type = obj.type;
        }

};

int main(){
    Animal dog1;
    dog1.setValues("Kallu", "Bulldog");
    dog1.getValues();

    Animal dog2(dog1);
    dog2.getValues();
}