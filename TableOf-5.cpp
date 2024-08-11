#include<iostream>
using namespace std;

int main(){
    int number = 21;

    cout<< "Multiplication table for"<< number<<":\n";
    for(int i = 1;i <= 10 ; i++){
        cout<< number << " x " <<i <<" = "<<(i*number)<<endl;
    }
    return 0;
}