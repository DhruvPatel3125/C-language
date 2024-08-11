#include <iostream>
using namespace std;

class customer
{
protected:
    string name;
    int phone_number;

public:
    void cust_detail()
    {
        cout << "enter customer name:";
        cin >> name;
        cout << "Enter the phone number:";
        cin >> phone_number;
    }
    void cust_disp()
    {
        cout << "The name of the customer is:" << name << endl;
        cout << "The phone number of the customer is:" << phone_number << endl;
    }
};

class deposit
{
protected:
    int acc_no;
    double balance;

public:
    void depo_detail()
    {
        cout << "Enter account number:";
        cin >> acc_no;
        cout << "Enter balance:";
        cin >> balance;
    }
    void depo_disp()
    {
        cout << "The account number of the customer is:" << acc_no << endl;
        cout << "The balance of the customer is:" << balance << endl;
    }
};

class borrow
{
    int loan_no;
    double lone_amt;

public:
    void borrow_detail()
    {
        cout << "Enter the loan number:";
        cin >> loan_no;
        cout << "Enter the loan ammount:";
        cin >> lone_amt;
    }
    void borrow_disp()
    {
        cout << "The loan number of the customer is:" << loan_no << endl;
        cout << "The loan ammount of the customer is:" << lone_amt << endl;
    }
};

class cust_det : public customer, public deposit, public borrow
{
public:
    void customers_details()
    {
        cust_detail();
        depo_detail();
        borrow_detail();
    }

    void display()
    {
        cust_disp();
        depo_disp();
        borrow_disp();
    }
};

int main()
{
    int n;
    cout << "Enter the number of customer:" << endl;
    cin >> n;

    cust_det *customers = new cust_det[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Details of the customer" << i + 1 << ":" << endl;
        customers[i].customers_details();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Customer " << i + 1 << ":" << "details" << endl;
        customers[i].display();
    }
}
