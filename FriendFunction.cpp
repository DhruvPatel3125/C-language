// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     void setnum(int n1,int n2){
//         a = n1;
//         b = n2;
//     }
//     friend complex sumComplex(complex o1,complex o2);//game tya lakhi sakay
//     void printnum(){
//         cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };

// // complex sumComplex(complex o1,complex o2){
// //     complex o3;
// //     o3.setnum((o1.a + o2.a),(o1.b + o2.b));
// //     return o3;

// complex sumComplex(complex o1,complex o2){
//     complex o3;
//     o3.setnum((o1.a + o2.a),(o1.b + o2.b));
//     return o3;
// }

// int main(){
//     complex c1,c2,sum;
//     c1.setnum(5,6);
//     c1.printnum();

//     c2.setnum(2,1);
//     c2.printnum();

//     sum = sumComplex(c1,c2);
//     sum.printnum();

//     return 0;
// }

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void disp(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printnum()
    {
        cout << "Your number is" << a << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.disp((o1.a + o2.a), (o1.b + o2.b));
    return o3;
};
int main()
{
    complex c1, c2, sum;
    c1.disp(5, 6);
    c1.printnum();

    c2.disp(2, 1);
    c2.printnum();

    sum = sumcomplex(c1, c2);
    sum.printnum();
    return 0;
}