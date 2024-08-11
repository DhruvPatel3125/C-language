#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:    //properties/ attributs

    Teacher(string n, string s,string d, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;
    float salary;



    //method
    // void changeDepartment(string newdept){
    //     dept = newdept;
    // }

  void getinfo(){
    cout << "name  : " << name << endl;
    cout << "subject  : " << subject << endl;
  }
};
int main(){
    Teacher t1("dhruv","computer science","c++",25000);
    t1.getinfo();
    return 0;
}