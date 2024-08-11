// //function overriding example

// #include<iostream>
// using namespace std;
// class magic1{
//     public:
//     void display(){
//         cout<<"\n display from magic1 class..";
//     }
// };
// class magic2:public magic1{
//     public:
//     void display()
//     {
//         cout<<"\n display from magic2 class...";
//     }
// };

// int main(){
//     magic2 m2;
//     m2.magic1::display();
//     m2.display();
//     return 0;
// }

// virtual function

#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"Base classs is invoked"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"derived class is invoked"<<endl;
    }
};
int main(){
    {
        A *a;
        A a1;
        B b1;
        a=&a1;
        a->display();

        a=&b1;
        a->display();
        
    }
    return 0;
}