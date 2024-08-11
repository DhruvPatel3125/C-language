#include<iostream>
using namespace std;

int main(){
    int a=20,b=10,temp;

    cout<<"before swapping A = "<< a <<" B = "<< b << endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"after swapping A = "<< a <<" B = "<< b << endl;
    return 0;
}