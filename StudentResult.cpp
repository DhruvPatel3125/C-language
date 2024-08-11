#include<iostream>
#include<vector>
using namespace std;
class student{
    string name;
    int rno;
    float marks;

    public:
        void setdetails(){
            cout<<"Enter student name:";
            cin>>name;

            cout<<"Enter student roll no:";
            cin>>rno;

            cout<<"Enter student marks:";
            cin>>marks;
        }
        void display(){
            cout<<"Name:"<<name<<endl;
            cout<<"roll no:"<<rno<<endl;
            cout<<"marks:"<<marks<<endl;
        }
};
int main(){
    int numberofstud;
    cout<<"Enter the number of student:";
    cin>>numberofstud;

    student*students = new student[numberofstud];

    for(int i =0 ;i<numberofstud;i++){
        cout<<"Enter details for student"<<(i+1)<<":"<<endl;
        students[i].setdetails();
    }

    for(int i=0;i<numberofstud;i++){
        students[i].display();
        cout<<"----------------------------------------------"<<endl;
    }
    return 0;
}