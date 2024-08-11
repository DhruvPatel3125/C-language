// #include<iostream>
// using namespace std;
// /*
// student --> test
// student --> sports
// test ---> result
// sport --> result
// */
// class student{
//     protected:
//         int rno;
//     public:
//         void set_number(int a){
//             rno = a;
//         }
//         void print_num(void){
//             cout<<"Your roll no is :"<<rno<<endl;
//         }
// };
// class test:virtual public student{
//     protected:
//     float math,state;
//     public:
//         void set_marks(float m1,float m2){
//             math = m1;
//             state = m2;
//         }

//         void print_marks(void){
//             cout<<"your result is hear:"<<endl
//                 <<"maths: "<<math<<endl
//                 <<"state: "<<state<<endl;
//         }
// };

// class sports:virtual public student{
//     protected:
//     float kabaddi,cricket;
//     public:
//         void set_markss(float n1,float n2){
//             kabaddi = n1;
//             cricket = n2;
//         }

//         void print_markss(void){
//             cout<<"your sports marks here:"<<endl
//                 <<"kabaddi:"<<kabaddi<<endl
//                 <<"cricket:"<<cricket<<endl;
//         }
// };
// class result:public test,public sports{
//     private:
//         float total;
//     public:
//         void display(void){
//             total = math+state+kabaddi+cricket;
//             print_num();
//             print_marks();
//             print_markss();

//             cout<<"Your total score is:"<<total<<endl;
//         }
// };
// int main(){
//     result ob;
//     ob.set_number(526);
//     ob.set_marks(78,88);
//     ob.set_markss(85,95);
//     ob.display();
    
//     return 0;
// }




// jyare pan program ni under 2 same function aavela hoy tyare aapre 1 function ne virtual banavvo pade

#include<iostream>
using namespace std;
class base{
    public:
    virtual void function1(){
        cout<<"this is function 1 on base class"<<endl;
    }
    virtual void function2(){
        cout<<"this is function 2 on base class"<<endl;
    }

};

class derived:public base{
    public:
    void function1(){
        cout<<"this is function 1 from derived class"<<endl;

    }

    void function2(){
        cout<<"this is function 2 from derived class"<<endl;
    }
};
int main(){
    base b;
    base*ptr;
    ptr=&b;
    ptr -> function1();
    ptr -> function2();
    derived d1;
    ptr=&d1;
    ptr->function1();
    ptr->function2();
    
    return 0;
}


