//function overloding 

// #include<iostream>
// using namespace std;
// class addition{
//     public:
//     void add(int a,int b){
//         cout<<"a+b:"<<a+b;
//     }
//     void add(int a,int b,int c){
//         cout<<"a+b+c:"<<a+b+c;
//     }
// };
// int main(){
//     {
//         addition a1;
//         a1.add(2,3);
//         a1.add(12,20,23);
//     }
//     return 0;
// }

// operater overloding

// #include<iostream>
// using namespace std;
// class magic{
//     private:
//     int a;
//     public:
//     magic(int x){
//         a=x;
//     }
//     void operator +(magic m1){
//         int add = a+m1.a;
//         cout<<"\n ans is:"<<add;
//     }
// };
// int main(){
//     magic m1(20);
//     magic m2(30);
//     m1+m2;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class magic{
//     private:
//     int a;
//     public:
//     magic(int x){
//         a=x;
//     }
//     void operator +(magic m1){
//         int add = a+m1.a;
//         cout<<"\n ans is:"<<add;
//     }
// };
// int main(){
//     magic m1(20);
//     magic m2(30);
//     m1+m2;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class magic{
//     int a;
//     public:
//     magic(int x){
//         a=x;
//     }
//     void operator *(magic m1){
//         int mul = a*m1.a;
//         cout<<"\n ans is:"<<mul;
//     }
// };
// int main(){
//     magic m1(20);
//     magic m2(3);
//     m1*m2;
//     return 0;
// }


// // function overloding

// #include<iostream>
// using namespace std;
// class overloding{
//     public:
//     void display(int x){
//         cout<<"value of x="<<x<<endl;
//     }
//     void display(double x){
//         cout<<"value of x="<<x<<endl;
//     }
//     void display(int x,int y){
//         cout<<"value of x and y is"<<x<<","<<y<<endl;
//     }
// };
// int main(){
//   {
//     overloding ob;
//     ob.display(10);
//     ob.display(10.236);
//     ob.display(20,30);
//   }  
//     return 0;
// }


// operator overloding

#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
    complex operator +(complex const &obj){
        complex res;
        res.real = real+obj.real;
        res.imag = imag+obj.imag;
        return res;
    }

    void print(){
        cout<<real<<"+i"<<imag;
    }
};
int main(){
    complex c1(10,3),c2(2,4);
    complex c3=c1+c2;
    c3.print();
    return 0;
}