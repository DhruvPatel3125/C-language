// // Create a called ACCOUNT. Derive two different classes DEPOSITE &
// // WITHDRAW from it. Derive one more class access
// // from DEPOSITE and WITHDRAW. Give the following facilities in the class
// // ACCESS.
// // 1.To create an account
// // 2.To deposit an account
// // 3.to withdraw from an account
// // 4. To check balance of particular account

#include<iostream>
#include<string>
using namespace std;

// Base class Account with virtual inheritance
class Account {
public:
    string name;
    int accno;
    float balance;

    // Method to create an account
    void createaccount() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accno;

        cout << "Enter the initial balance: ";
        cin >> balance;

        cout << "Account created successfully for " << name << endl;
    }

    // Method to check the balance
    float checkbalance() {
        return balance;
    }
};

// Derived class Deposit from Account with virtual inheritance
class deposit : virtual public Account {
public:

    // Method to deposit into the account
    void depositaccount() {
        float amount;
        cout << "Enter the amount to be deposited: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully."
                " Account balance after deposit is: " << balance << endl;
    }
};

// Derived class Withdraw from Account with virtual inheritance
class withdraw : virtual public Account {
public:
    // Method to withdraw from the account
    void withdrawaccount() {
        float amount;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. Account balance after withdrawal is: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

// Class Access, derived from both Deposit and Withdraw
class access : public deposit, public withdraw {
public:
    // Method to display the account balance
    void showbalance() {
        cout << "The current balance is: " << checkbalance() << endl;
    }
};

int main() {
    access myAccount; // Create an object of class access

    // Step 1: Create an account
    myAccount.createaccount();

    // Step 2: Deposit money
    myAccount.depositaccount();

    // Step 3: Withdraw money
    myAccount.withdrawaccount();

    // Step 4: Check the balance
    myAccount.showbalance();

    return 0;
}
