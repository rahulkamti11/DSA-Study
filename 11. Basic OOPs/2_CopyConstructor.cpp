#include <iostream>
using namespace std;

//C++ has a default COPY CONSTRUCTOR
//C++ uses a default copy constructor if not defined explicitly.

class Teacher{
    public:
        string name;
        int age;
        string subject;
        double salary;

        Teacher(){  //Non Parameterized Constructor
            cout << "Non Parameterized Constructor Invoked." << endl;
        }

        Teacher(string name, int age, string subject, double salary){ //Parameterized Constructor
            cout << "Parameterized Constructor Invoked." << endl; 
            this->name = name;
            this->age = age;
            this->subject = subject;
            this->salary = salary;
        }

        //Copy Constructor
        Teacher(Teacher &t){ //(&t) Needed to pass the reference of the object which will be copied
            cout << "Copy Constrcutor Invoked." << endl;
            this->name = t.name;
            this->age = t.age;
            this->subject = t.subject;
            this->salary = t.salary;
        }

        void getData(){
            cout << "Name: "<< name << endl;
            cout << "Age: "<< age << endl;
            cout << "Subject: "<< subject << endl;
            cout << "Salary: "<< salary << endl;
        }
};

int main() {
    cout << "\n----Copy Constructor----" <<endl;
    Teacher T1;
    Teacher T2("Rahul" , 22 ,"C++" , 200000);
    Teacher T3(T2);
    T3.getData();

    return 0;
}