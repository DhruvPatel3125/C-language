// #include <iostream>
// #include <string>
// using namespace std;
// class employee
// {
// protected:
//     int empId;
//     string empname;

// public:
//     void inpu()
//     {
//         cout << "enter empid:" << endl;
//         cin >> empId;

//         cout << "enter empname:" << endl;
//         cin >> empname;
//     }
// };

// class salary : public employee
// {
// private:
//     double basicsalary;
//     double da;
//     double hra;
//     double incometex;
//     double netsalary;

// public:
//     void salar()
//     {
//         cout << "ENTER THE BASICSALARY:" << basicsalary << endl;
//         cin >> basicsalary;
//         da = 0.25 * basicsalary;
//         hra = 800;
//         incometex = 0.15 * basicsalary;
//         netsalary = basicsalary + da - hra - incometex;
//     }

//     void displaysalarydetails()
//     {
//         cout << "Employee id is:" << empId << endl;
//         cout << "Employee name is:" << empname << endl;
//         cout << "Basicsalary is:" << basicsalary << endl;
//         cout << "DA is:" << da << endl;
//         cout << "HRA is:" << hra << endl;
//         cout << "Income tax is:" << incometex << endl;
//         cout << "Net salary is:" << netsalary << endl;
//     }
// };
// int main()
// {
//     salary ob;
//     ob.inpu();
//     ob.salar();
//     ob.displaysalarydetails();

//     return 0;
// }
//  Write a C++ program to define a class employee having members Empid,Emp-name And other class Salary having members basic salary .
//  Calculate DA=25% of basic salary, HRA=800, I-tax=15% of basic salary,
// hra = 800; da = 0.25 * basic_salary; i_tax = 0.15
// *basic_salary;net_salary = basic_salary + da + hra - i_tax;
#include <iostream>
using namespace std;
class employee
{
public:
    int empid;
    string empname;
    void inpu()
    {
        cout << "Enter employee id:" << endl;
        cin >> empid;

        cout << "Enter employee name:" << endl;
        cin >> empname;
    }
    void disemp()
    {
        cout << "Employee id is:" << empid << endl;
        cout << "Employee name is:" << empname << endl;
    }
};

class salary
{
public:
    double basicsalary;
    double da;
    double hra;
    double incometex;
    double netsalary;
    void salar()
    {
        cout << "Enter the basic salary:" << endl;
        cin >> basicsalary;
        da = 0.25 * basicsalary;
        hra = 800;
        incometex = 0.15 * basicsalary;
        netsalary = basicsalary + da - hra - incometex;
    }
    void displaysal()
    {
        cout << "Enployee basicsalary is:" << basicsalary << endl;
        cout << "Employee DA is:" << da << endl;
        cout << "Employee HRA is:" << hra << endl;
        cout << "Employee I-tax is:" << incometex << endl;
        cout << "Employee net salary is:" << netsalary << endl;
    }
};
class emp_salary : public employee, public salary
{
public:
    void emp_sal()
    {
        inpu();
        salar();
    }
    void disp()
    {
        disemp();
        displaysal();
    }
};
int main()
{
    int n;
    cout << "Enter the number of customer:" << endl;
    cin >> n;
    emp_salary *employees = new emp_salary[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter customer details of" << i + 1 << "customer :" << endl;
        employees[i].emp_sal();
        cout << "---------------------------------------------" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The customer" << i + 1 << "details" << endl;
        employees[i].disp();
        cout << "---------------------------------------------" << endl;
    }
}
