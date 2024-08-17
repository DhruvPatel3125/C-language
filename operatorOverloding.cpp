#include<iostream>
using namespace std;
class fraction{
    private:
        int nummerator;
        int denominator;
    public:
        //constructor
        fraction(int num =0,int deno = 1):nummerator(num),denominator(deno){}
        //overload ++operator(prefix)
        fraction & operator++(){
            nummerator += denominator;
            return *this;
        }

        //overlode --operator
        fraction & operator--(){
            nummerator -= denominator;
            return *this;
        }

        //overlode * operator
        fraction operator*(const fraction& other)const{
            return fraction(nummerator * other.nummerator,denominator*other.denominator);
        }

        void display()const{
            cout<<nummerator<<"/"<<denominator<<endl;
        }
};
int main(){
    fraction f1(3,4);
    fraction f2(8,4);

    cout<<"Original fraction :"<<endl;
    f1.display();
    f2.display();

    ++f1;
    cout<<"After incrementing f1:"<<endl;
    f1.display();

    --f2;
    cout<<"After decrementing f2:"<<endl;
    f2.display();

    fraction f3=f1*f2;
    cout<<"After multiplaying f1 and f2:"<<endl;
    f3.display();
    return 0;
}