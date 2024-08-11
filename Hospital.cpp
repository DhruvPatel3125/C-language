#include <iostream>
using namespace std;
class patient
{
public:
    string pat_name;
    int age;
    char sex;

    void petientdetails()
    {
        cout << "enter the patient name:" << endl;
        cin >> pat_name;
        cout << "Enter the age:" << endl;
        cin >> age;
        cout << "Enter the sex(M/F):" << endl;
        cin >> sex;
    }
    void dispet()
    {
        cout << "Patient name is:" << pat_name << endl;
        cout << "Patient age is:" << age << endl;
        cout << "patient gender is:" << sex << endl;
    }
};

class ipd
{
public:
    int ward_no;
    int bed_no;
    double charge_per_day;
    void ipddetails()
    {
        cout << "Enter the ward number:" << endl;
        cin >> ward_no;
        cout << "Enter the bed number:" << endl;
        cin >> bed_no;
        cout << "Enter charge per day:" << endl;
        cin >> charge_per_day;
    }

    void dispipd()
    {
        cout << "Ward number is:" << ward_no << endl;
        cout << "Bed number is:" << bed_no << endl;
        cout << "charge per day is:" << charge_per_day << endl;
    }
};

class ipd_patient : public patient, public ipd
{
public:
    int n;
    void ipd_pet_details()
    {
        petientdetails();
        ipddetails();

        cout << "Enter number of days admitted:" << endl;
        cin >> n;
    }

    void display_pet_details()
    {
        dispet();
        dispipd();

        cout << "number of days admitted:" << n << endl;
    }
};

int main()
{
    int d;
    cout << "Enter the number of ipd patient:" << endl;
    cin >> d;

    ipd_patient *patients = new ipd_patient[d];

    for (int i = 0; i < d; i++)
    {
        cout << "Enter the details of IPD patients" << i + 1 << ":" << endl;
        patients[i].ipd_pet_details();
    }

    cout << "Displaying ipd patient details" << endl;
    for (int i = 0; i < d; i++)
    {
        cout << "IPD patient" << i + 1 << ":" << "details" << endl;
        patients[i].display_pet_details();
    }
    return 0;
}