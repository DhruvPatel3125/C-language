//  Write a C++ program to add two numbers using single inheritance.
// Accept these two numbers from the user in base class and display the
// sum of these two numbers in derived class.

#include<iostream>
using namespace std;
class Base {
    protected:
        int n1,n2;
    public:
        void getnumber(){
            cout<<"Enter the first number:";
            cin>>n1;

            cout<<"Enter the second numebr:";
            cin>>n2;
        }
};

class Derived:public Base{
    public:
        void display(){
            int sum = n1+n2;
            cout<<"The sum of two number is:"<<sum<<endl;
        }
};
int main(){
  Derived d1;
  d1.getnumber();
  d1.display();  
    return 0;
}