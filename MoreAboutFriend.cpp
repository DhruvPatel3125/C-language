#include<iostream>
using namespace std;
class Y;
class X{
    int a;
    public:
    void setvalue(int value){
        a = value;
    }
    friend void add(X,Y);
};

class Y{
    int b;
    public:
    void setvalue(int value){
        b = value;
    }
    friend void add(X,Y);
};
void add(X o1,Y o2){
    cout<<"Summing data of X and Y object give me: "<<o1.a+o2.b;
} 
int main(){
    X a1;
    a1.setvalue(3);
    
    Y a2;
    a2.setvalue(3);

    add(a1,a2);
    return 0;
}


//swap two number

// #include<iostream>
// using namespace std;
// class c2;
// class c1{
//     int val1;
//     public:
//     void indata(int a){
//         val1 = a;
//     }
//     friend void exchange(c1 &x,c2 &y);
//     void display(void){
//         cout<<val1<<endl;
//     }
// };
// class c2{
//     int val2;
//     public:
//     void indata(int a){
//         val2 = a;
//     }
//     friend void exchange(c1 &x,c2 &y);
//     void display(void){
//         cout<<val2<<endl;
//     }
// };

// void exchange(c1 &x,c2 &y){
//     int temp = x.val1;
//     x.val1 = y.val2;
//     y.val2 = temp;
// }
// int main(){
//     c1 oc1;
//     c2 oc2;

//     oc1.indata(34);
//     oc2.indata(67);
//     exchange(oc1,oc2);

//     cout<<"The value of c1 after exchangeing becomes:";
//     oc1.display();
//     cout<<"The value of c2 after exchangeing becomes:";
//     oc2.display();
    
//     return 0;
// }