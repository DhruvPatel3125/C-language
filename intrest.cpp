//  C++ Program To Calculate Simple Interest using class and object.


#include<iostream>
using namespace std;
class intrese{
    public:
    int p;
    float r;
    int n;
    int total;

    void intrest(){
        cout<<"enter the price:";
        cin>>p;

        cout<<"enter the rate:";
        cin>>r;

        cout<<"enter the number of period:";
        cin>>n;

        total = p*r*n/100;

        cout<<"the total intrest is:"<<total<<endl;
    }
};
int main(){
    intrese ob;
    ob.intrest();
    return 0;
}