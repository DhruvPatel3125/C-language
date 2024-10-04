#include<iostream>
using namespace std;
class Month{
    public:
    int month;
    void read(){
        cout<<"Enter month number (1-12):";
        cin>>month;

        if(month<1||month>12){
            cout<<"Invalid month number"<<endl;
        }

    }

    void operator++(){
        month++;
        if(month>12){
            month=1;
        }
}
    void display(){
        cout<<"Enter month number is:"<<month<<endl;
    }
};
int main(){
    Month m;
    m.read();
    ++m;
    m.display();
    return 0;
}