#include <iostream>
using namespace std;

class person
{
private:
    int age;
    string name;
    string add;

public:
    void input()
    {
        cout << "enter the age";
        cin >> age;

        cout << "enter the name";
        cin >> name;

        cout << "enter the address";
        cin >> add;
    };

    void show()
    {
        cout << "the age is" << age << endl;
        cout << "the name is" << name << endl;
        cout << "the address is" << add << endl;
    };
};

int main()
{
    person dhruv, b, c;
    dhruv.input();
    dhruv.show();

    return 0;
};
