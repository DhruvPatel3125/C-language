#include<iostream>
using namespace std;
class person{
    protected:
    int id;
    string name;
    string address;
    int phone_number;
    public:
    void per_details(){
        cout<<"Enter id:"<<endl;
        cin>>id;

        cout<<"Enter name:"<<endl;
        cin>>name;

        cout<<"Enter address:"<<endl;
        cin>>address;

        cout<<"Enter phone number:"<<endl;
        cin>>phone_number;
    }

    void per_disp(){
        cout<<"person id:"<<id<<endl;
        cout<<"persone name:"<<name<<endl;
        cout<<"person address:"<<address<<endl;
        cout<<"person phone number:"<<phone_number<<endl;
    }
};

class electrycity:public person{
    public:
    int units;
    void elect_details(){
        per_details();

        cout<<"Enter unit consumed:";
        cin>>units;
    }

    void calculate_bill(){
        double bill_amt=0;

        if(units<=100){
            bill_amt=units*1.20;
        }
        else if(units<=200){
            bill_amt=units*2;
        }
        else{
            bill_amt=units*3;
        }

        cout<<"Total bill ammount: "<<bill_amt<<" RS "<<endl;
    }
};

class fraction{
    public:
    int numerator;
    int denominator;

    void fraction_details(){
        cout<<"Enter numerator: ";
        cin>>numerator;

        cout<<"Enter denominator: ";
        cin>>denominator;
    }

    void fraction_disp(){
        cout<<"Fraction numerator:"<<numerator<<endl;
        cout<<"Fraction denominator:"<<denominator<<endl;
    }
};
int main(){
    electrycity e;
    e.elect_details();
    e.per_details();
    e.calculate_bill();


    fraction f;
    f.fraction_details();
    f.fraction_disp();
    return 0;


}