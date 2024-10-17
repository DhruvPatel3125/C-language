//  Write a C++ program to design a base class Employee (eno, ename,
// address, phone_no)) . Derive a class Manager (designation, department
// name, basic-salary) from Employee.
//  a. Accept all details of 'n' managers.
//  b. Display manager salary with details .

#include <iostream>
using namespace std;
 class employee
 {
 public:
     int eno;
     string ename;
     string address;
     string phone_no;

     void getempdetails()
     {
         cout << "Enter employee number:";
         cin >> eno;

         cout << "Enter employee name:";
         cin >> ename;

         cout << "Enter employee address:";
         cin >> address;

         cout << "Enter phone number:";
         cin >> phone_no;
     }

     void dispemp(){
        cout << "Employee Number: " << eno << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee Address: " << address << endl;
        cout << "Phone Number: " << phone_no << endl;
     }
 };
 class manager:public employee{
    public:
    string designation;
    string dept_name;
    float basic_salary;

    void getmanagerdetails(){
        getempdetails();

        cout<<"Enter designation:";
        cin>>designation;

        cout<<"Enter  department name:";
        cin>>dept_name;

        cout<<"Enter  basic salary:";
        cin>>basic_salary;
    }

    void  dispmanager(){
        dispemp();
        cout<<"designation:"<<designation<<endl;
        cout<<"department name:"<<dept_name<<endl;
        cout<<"basic salary:"<<basic_salary<<endl;

 }
 };

 int main()
 {
    int n;
    cout<<"Enter the number of manager:";
    cin>>n;

    manager*managers = new manager[n];

    for(int i =0;i<n;i++){
        cout<<"Enter the details of manager"<<i+1<<":"<<endl;
        managers[i].getmanagerdetails();
    }

    for(int i=0;i<n;i++){
        cout<<"------------------------------------------------";
        cout<<"details of manager"<<i+1<<":"<<endl;
        managers[i].dispmanager();
        

    }
     return 0;
 }