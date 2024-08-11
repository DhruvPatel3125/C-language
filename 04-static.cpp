#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the Id"<<endl;
        cin>>id;
        count++;
    }

    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
};
//here the count is static dhruv,prince,sujal badha 1 j static no use kare che
int Employee::count;

int main(){
    Employee dhruv,prince,sujal;

    dhruv.setData();
    dhruv.getdata();

    prince.setData();
    prince.getdata();

    sujal.setData();
    sujal.getdata();
    return 0;
}