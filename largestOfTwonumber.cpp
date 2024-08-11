// Write a C++ program to find Largest among 2 numbers using class and
// object.

#include<iostream>
using namespace std;
class a{
    public:
    int number1;
    int number2;

void largest(){
    cout<<"Enter the number 1:\n";
    cin>>number1;

    cout<<"Enter the number 2:\n";
    cin>>number2;

    if(number1>number2){
        cout<<number1<<" is larger then "<< number2<<endl;
    }
    else if(number1=number2){
        cout<<number2<<" is larger then "<< number1<<endl;
    }
    else{
        cout<<"both number are same"<<endl;
    }
}
};
int main(){
    a ob;
    ob.largest();
    return 0;
}