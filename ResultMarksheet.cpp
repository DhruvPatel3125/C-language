// Write a C++ program to calculate the percentage of a student using
// multi-level inheritance.
// Accept the student details (rollno,name) in base class.
// The marks class (marks of three subjects) derived from the student.
// The result class(calculate percentage) derived from the marks.

#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;

    void getdetails(){
        cout<<"Enter roll number:";
        cin>>rno;

        cout<<"Enter name:";
        cin>>name;
    }
};

class marks:public Student{
    public:
    int m1,m2,m3;

    void getdata(){
        cout<<"Enter marks for three subject:";
        cin>>m1>>m2>>m3;
    }
};

class result:public marks{
    public:
        void displayper(){
            int total = m1+m2+m3;
            float per = total/3.0;

            cout<<"Roll no:"<<rno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Total marks:"<<total<<endl;
            cout<<"percentage:"<<per<<endl;
        }
};
int main(){
    result w;
    w.getdetails();
    w.getdata();
    w.displayper();
    
    return 0;
}