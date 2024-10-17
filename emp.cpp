#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Emp {
    int eno;
    char name[30];
    float salary;

public:
    void input() {
        cout << "Enter Employee Number: ";
        cin >> eno;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee Number: " << eno << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Salary: " << salary << "\n";
    }

    int getEno() {
        return eno;
    }

    float getSalary() {
        return salary;
    }

    void giveIncrement() {
        if (salary > 10000) {
            salary += 5000;
        }
    }
};

int main() {
    Emp employees[3];
    int choice, enoSearch;
    bool found;

    while (1) {
        cout << "\n1. Store Details of 3 Employees";
        cout << "\n2. Search Employee by Employee Number";
        cout << "\n3. Give Increment";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 3; i++) {
                    cout << "\nEnter details of Employee " << (i + 1) << ":\n";
                    employees[i].input();
                }
                break;

            case 2:
                cout << "Enter Employee Number to search: ";
                cin >> enoSearch;
                found = false;
                for (int i = 0; i < 3; i++) {
                    if (employees[i].getEno() == enoSearch) {
                        employees[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found.\n";
                }
                break;

            case 3:
                for (int i = 0; i < 3; i++) {
                    employees[i].giveIncrement();
                }
                cout << "Increment given to eligible employees.\n";
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    getch();
}
