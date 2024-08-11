#include <iostream>
using namespace std;
class a1
{
private:
    int a, b, c;

public:
    int d, e;

    void inpu(int e1, int b1, int c1);
    void display()
    {
        cout << "the value of a=" << a << endl;
        cout << "the value of b=" << b << endl;
        cout << "the value of c=" << c << endl;
        cout << "the value of d=" << d << endl;
        cout << "the value of e=" << e << endl;
    }
};

void a1::inpu(int e1, int b1, int c1)
{
    a = e1;
    b = b1;
    c = c1;
}
int main()
{
    a1 ob;
    ob.d = 11;
    ob.e = 52;
    ob.inpu(5, 10, 25);
    ob.display();
    return 0;
}