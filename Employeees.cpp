#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
    int empId;
    string empname;

public:
    void inpu()
    {
        cout << "enter empid:" << endl;
        cin >> empId;

        cout << "enter empname:" << endl;
        cin >> empname;
    }
};

class salary : public employee
{
private:
    double basicsalary;
    double da;
    double hra;
    double incometex;
    double netsalary;

public:
    void salar()
    {
        cout << "ENTER THE BASICSALARY:" << basicsalary << endl;
        cin >> basicsalary;
        da = 0.25 * basicsalary;
        hra = 800;
        incometex = 0.15 * basicsalary;
        netsalary = basicsalary + da - hra - incometex;
    }

    void displaysalarydetails()
    {
        cout << "Employee id is:" << empId << endl;
        cout << "Employee name is:" << empname << endl;
        cout << "Basicsalary is:" << basicsalary << endl;
        cout << "DA is:" << da << endl;
        cout << "HRA is:" << hra << endl;
        cout << "Income tax is:" << incometex << endl;
        cout << "Net salary is:" << netsalary << endl;
    }
};
int main()
{
    salary ob;
    ob.inpu();
    ob.salar();
    ob.displaysalarydetails();

    return 0;
}