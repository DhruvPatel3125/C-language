#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remeainder, result = 0;

    cout << "Enter the three digit number:";
    cin >> num;

    originalNum = num;

    while (originalNum != 0)
    {
        remeainder = originalNum % 10;

        result += remeainder * remeainder * remeainder;

        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is armstrong number." << endl;

    else
        cout << num << " is not an armstrong number." << endl;
    return 0;
}