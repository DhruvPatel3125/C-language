// C++ Program to find Factorial of a number using class and object.

#include<iostream>
using namespace std;
class fact{
    public:
    int n;
    int i;

    void facto(){
        cout<<"enter the number of factorial";
        cin>>n;
        int f=1;
        for(i=1;i<=n;i++){
             f *= i;
        }
        cout<<f;
    }
};
int main(){
    fact ob;
    ob.facto();
    return 0;
}