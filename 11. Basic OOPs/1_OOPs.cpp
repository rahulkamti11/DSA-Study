#include <iostream>
using namespace std;

class Teacher{   //Class

        //DATA MEMBERS
    private:     //Encapsulation
        int joiningDate;
        double salary;

    public:      //Access Specifiers
        string fname;
        string lname;
        string subject;
        string dept;
        long int mob;

        Teacher(){    //Constructor 
            cout << "Object Created." << endl;
        }

        //Overloaded Constructor , Parameterized Constructor
        Teacher(string fname , string lname , string subject , string dept , long int mob){
            this->fname = fname ;
            this->lname = lname;
            this->subject = subject;
            this->dept = dept;
            this->mob = mob;
            cout << "Teacher's Details Filled." << endl;
        }


        //MEMBER FUNCTIONS
        void getData(){    //Getter
            cout << "Teacher's Details:" << endl;
            cout << "Name: " << fname << " " << lname << endl;
            cout << "Subject: " << subject << endl;
            cout << "Department: " << dept << endl;
            cout << "Contact: +91-" << mob << endl;
        }

        void takeAttendance(){
            cout << fname <<" sir is Taking Attendance..." << endl;
        }

        void teach(){
            cout << fname << " sir is Teaching..." << endl;
        }

        void setSalary(double salary){ //Setter
            this->salary = salary;
        }

        double getSalary(){  //Getter
            return salary;
        }

        void setJoin(int joiningDate){  //Setter
            this->joiningDate = joiningDate;
        }

        double getJoin(){  //Getter
            return joiningDate;
        }


        //Destructor --> Used in free dynamically allocated memory, files system (closing file), etc.
        ~Teacher(){
            cout << "Object Destroyed by Destructor" << endl;
        }

};

int main() {
    cout << "----OOPs Concept----" <<endl;
    
    //Creaating 2 teacher objects
    Teacher T1; //Constructor 1 will be called
    Teacher T2("Rahul","Kamti", "C++" , "CSE" , 987654321 ); //Overloaded Constructor will be called + Setting Data using constructor T2 (Teacher Object 2).

    cout << endl;

    //Setting data into PUBLIC data members after creating the object
    T1.fname = "Teacher 1"; 
    T1.lname = "Surname";
    T1.subject = "Subject Name";
    T1.dept = "Department Name";
    T1.mob = 123456789;

    //Setting data into PRIVATE data members after creating the object using 
    T1.setJoin(2025);
    T1.setSalary(50000.50);

    //Getting Data one by one 
    cout << T1.fname << " " << T1.lname << endl;
    cout << T1.subject << endl;
    cout << T1.dept << endl;
    cout << "+91-" << T1.mob << endl;

    cout << T1.getJoin() << endl;
    cout << T1.getSalary() << endl;

    T1.takeAttendance();
    T1.teach();

    cout << endl;
    //Teacher 2 (object T2) details
    T2.setJoin(2026);
    T2.setSalary(100000);

    T2.getData();
    cout << "Joining Year: " << T2.getJoin() << endl;
    cout << "Salary: " << T2.getSalary() << endl;
    T2.takeAttendance();
    T2.teach();


    return 0;
}
