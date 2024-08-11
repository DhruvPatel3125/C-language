#include<iostream>
using namespace std;
class diso{
    int a;
    public:
    diso(){//default constructor
        a=0;
    }
    diso(int n){
        a = n;
    }
    diso(diso &obj){//copy constructor
        cout<<"copy constructor is called"<<endl;
        a = obj.a;
    }
    void disp(){
        cout<<"The number of selcter is : "<<a<<endl;
    }
};
int main(){
    diso x(70),y(50),z(10);
    x.disp();
    y.disp();
    z.disp();
    diso p1(z);//jeno copy banavu hoy te breket ma lakhvanu
    p1.disp();
    return 0;
}