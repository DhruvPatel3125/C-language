// #include <iostream>
// using namespace std;

// class Student {
// public:
//     int rollno;
//     string name;
// };

// int main() {
//     Student A;
//     Student B;

//     A.rollno = 1;
//     A.name = "dhruv";

//     B.rollno = 2;
//     B.name = "sujal"; // Corrected spelling

//     cout << "Name and Roll no of A is: " << A.name << "-" << A.rollno << endl;
//     cout << "Name and Roll no of B is: " << B.name << "-" << B.rollno << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class student{
//     public:
//     int rollno;
//     string name;
// };
// int main(){
//     student A;
//     student B;

//     A.rollno = 1;
//     A.name = "dhruv";

//     B.rollno = 2;
//     B.name = "prince";

//     cout<<" Name and Rollno of A is:"<<A.name <<"-"<<A.rollno << endl;
//     cout<<" Name and Rollno of B is:"<<B.name <<"-"<<B.rollno << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Sample {
// public:
//     int age;

//     void display_age() {
//         cout << "Your age is: " << age << endl;
//     }
// };

// int main() {
//     Sample obj1;
//     cout << "Enter your age: ";
//     cin >> obj1.age;
//     obj1.display_age(); 

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class sample {
//     public:
//     int age;

//     void display_age(){
//         cout<<"your age is:"<<age<<endl;
//     }
// };
// int main(){
//     sample obj1;
//     cout<<"enter your age:";
//     cin>>obj1.age;
//     obj1.display_age();
//     return 0;
// }


#include<iostream>
using namespace std;

class teacher{
    public:
    int id;
    string name;
    string department;
    string subject;

    void changedept(){
        cout<<"your department is:="<<department<<endl;
    }

};

int main(){
    teacher t1;
    t1.id = 101;
    t1.name = "dhruv";
    t1.department = "information teachnology";
    t1.subject = "c++";
  
    cout<<t1.name;
    return 0;
}