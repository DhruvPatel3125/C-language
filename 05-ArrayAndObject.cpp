// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//         void setId(void){
//             salary=122;
//             cout<<"Enter the id of employee"<<endl;
//             cin>>id;
//         }
//         void getid(void){
//             cout<<"The id of this employeee is "<<id<<endl;
//         }
//         };
// int main(){
//     // employee dhruv,sujal,prince;
//     // dhruv.setId();
//     // dhruv.getid();
//     employee fb[4];
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setId();
//         fb[i].getid();
//     }
    
//     return 0;
// }


#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }

    void setDatabysum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber(){
        cout<<"Your complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    c1.printnumber(); 
    c2.setData(3,4);
    c2.printnumber();
    c3.setDatabysum(c1,c2);
    c3.printnumber();

    return 0;
}