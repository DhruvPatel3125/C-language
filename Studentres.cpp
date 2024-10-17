#include <iostream>
using namespace std;


    class Stuent
    {
        int roll;
        string name;
        int m1, m2, m3, m4, m5;
        int total;
        float per;

    public:
        void getdata()
        {
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter marks for 5 subjects: ";
            cin >> m1 >> m2 >> m3 >> m4 >> m5;
            calculate();
        }
    void calculate(){
        total = m1+m2+m3+m4+m5;
        if(m1>=33 && m2>=33 && m3>=33 &&  m4>=33 && m5>=33){
            per = total/5;
        }
        else{
            per = 0;
        }
    }

    void disp(){
        cout << "Roll Number: " << roll << endl;
        cout<<"Student name:"<<name<<endl;
        cout<<"Total Marks:"<<total<<endl;
        if(per>0){
            cout<<"per"<<per<<endl;
        }else{
            cout<<"Fail"<<endl;
        }
    }
    };
    int main()
    {
        int n;
        cout<<"Enter number of students: ";
        cin>>n;
        Stuent  s[n];
        for(int i=0;i<n;i++){
            s[i].getdata();
            s[i].disp();
        }
        return 0;

    }