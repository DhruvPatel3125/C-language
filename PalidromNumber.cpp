#include<iostream>
using namespace std;

int main(){
    int num,digit,rev=0;

    cout<<"Enter the number";
    cin>>num;

    int orignalnumber = num;

    while(num > 0){
        digit = num%10;   //550
        rev = (rev*10) + digit;
        num/= 10;
    }

    cout<<"the reverce number is ="<<rev<<endl;

    if(orignalnumber == rev)
        cout<<"The number is a Palidrome";
    else
        cout<<"The number is not Palidrome";
    return 0;
}