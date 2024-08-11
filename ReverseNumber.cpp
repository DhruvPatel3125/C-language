#include <iostream>
using namespace std;
class reve
{
private:
    int originalnumber;
    int reversednumber;

public:
    reve(int num)
    {
        originalnumber = num;
        reversednumber = 0;
    }

    void reverse()
    {
        int temp = originalnumber;
        while (temp > 0)
        {
            int digit = temp % 10;
            reversednumber = reversednumber * 10 + digit;
            temp /= 10;
        }
    }

    void disp()
    {
        cout << "original number:" << originalnumber << endl;
        cout << "reversed number:" << reversednumber << endl;
    }
};
int main()
{
    int num;
    cout << "Enter the positive integer: ";
    cin >> num;

    reve S1(num);
    S1.reverse();
    S1.disp();
    return 0;
}