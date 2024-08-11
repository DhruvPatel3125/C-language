//  Write a program in c++ to print the student details with course and
// fees of course. One student class with property student name
// and id. and another Course class with course name and its fees.




#include<iostream>
#include<string>
using namespace std;
 class student{
    protected:
        string studentname;
        int studID;
        public:
        void displaystudentdetails(){
            cout<<"Enter student name:"<<endl;
            cin>>studentname;
            cout<<"Enter Student id:"<<endl;
            cin>>studID;
        }
        void disp(){
            cout<<"student name is:"<<studentname<<endl;
            cout<<"Student id is:"<<studID<<endl;
        }
    };

class course:public student{
    private:
    string coursname;
    double coursefees;

    public:
    void displaycoursedetails(){
        cout<<"Enter Course name:"<<endl;
        cin>>coursname;
        cout<<"Enter course feea:$"<<endl;
        cin>>coursefees;
    }
    void dis(){
        cout<<"Course name is:"<<coursname<<endl;
        cout<<"Course fees is:"<<coursefees<<endl;
    }
};

int main(){
   course ob;
   ob.displaycoursedetails();
   ob.displaystudentdetails();
   ob.disp();
   ob.dis();

    return 0;
}


