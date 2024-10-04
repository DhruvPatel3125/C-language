// #include<iostream>
// using namespace std;
// class fraction{
//     private:
//         int nummerator;
//         int denominator;
//     public:
//         //constructor
//         fraction(int num =0,int deno = 1):nummerator(num),denominator(deno){}
//         //overload ++operator(prefix)
//         fraction & operator++(){
//             nummerator += denominator;
//             return *this;
//         }

//         //overlode --operator
//         fraction & operator--(){
//             nummerator -= denominator;
//             return *this;
//         }

//         //overlode * operator
//         fraction operator*(const fraction& other)const{
//             return fraction(nummerator * other.nummerator,denominator*other.denominator);
//         }

//         void display()const{
//             cout<<nummerator<<"/"<<denominator<<endl;
//         }
// };
// int main(){
//     fraction f1(3,4);
//     fraction f2(8,4);

//     cout<<"Original fraction :"<<endl;
//     f1.display();
//     f2.display();

//     ++f1;
//     cout<<"After incrementing f1:"<<endl;
//     f1.display();

//     --f2;
//     cout<<"After decrementing f2:"<<endl;
//     f2.display();

//     fraction f3=f1*f2;
//     cout<<"After multiplaying f1 and f2:"<<endl;
//     f3.display();
//     return 0;
// }

// // #include<iostream>
// // using namespace std;

// // class fraction{
// //     public:
// //     int n1;
// //     int n2;

// //     fraction(int n1=0,int n2=0){}
// //     fraction &  operator++(){
// //         n1 += n2;
// //         return *this;
// // }

// //     fraction & operator--(){
// //         n1-=n2;
// //         return *this;
// //     }

// //     fraction operator*(const fraction& others)const{
// //         return fraction(n1*others.n1,n2*others.n2);
// //     }

// //     void display()const{
// //         cout<<n1<<"/"<<n2<<endl;
// //     }
// // };
// // int main(){
// //     fraction f1(3,4);
// //     fraction f2(8,4);

// //     cout<<"Original fraction  :"<<endl;
// //     f1.display();
// //     f2.display();

// //     ++f1;
// //     cout<<"After  incrementing f1:"<<endl;
// //     f1.display();

// //     cout<<"After decreemnt f2:"<<endl;
// //     f2.display();

// //     fraction f3 = f1*f2;
// //     cout<<"After multiply f1 and f2:"<<endl;
// //     f3.display();


// //     return 0;
// // }

#include<iostream>
using  namespace std;
class data{
  private:
  int a;
  int b;
  public:
  void getdata(){
    cin>>a>>b;
  }
  void putdata(){
    cout<<"a:"<<a<<"b:"<<b<<endl;
  }

  friend void operator- (data &d1)
  {           
    d1.a = -d1.a;
    d1.b = -d1.b;
  }
  friend void operator+ (data d3,data d4){
    cout<<"\n";
    cout<<d3.a+d4.a<<"+";
    cout<<d3.b+d4.b;
  }
  
};

int main(){
  data d1,d3,d4;
  d1.getdata();
  d3.getdata();
  d4.getdata();
  operator-(d1);
  d1.putdata();
  operator+(d3,d4);
  return 1;
}