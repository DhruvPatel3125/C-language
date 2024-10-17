// //write c++ program to concatenate the two string using operator overloding
// #include<iostream>
// #include<string.h>
// using namespace std;

// class Strin{
//     char str[40];

//     public:
//     void getstr(){
//         cout<<"Enter the string:"<<endl;
//         cin>>str;
//     }

//     //operator  overloading
//     Strin operator+(Strin s){
//         Strin temp;
//         strcpy(temp.str,str);
//         strcat(temp.str,s.str);
//         return  temp;
//     }
//     void disp(){
//         cout<<str<<endl;
//     }

// };

// int main(){
//     Strin s1,s2,res;
//     cout<<"Enter first string:"<<endl;
//     s1.getstr();
//     cout<<"Enter  second string:"<<endl;
//     s2.getstr();
//     res=s1+s2;
//     cout<<"String after concatenation:"<<endl;
//     res.disp();

//     return 0;
// }

#include<iostream>
#include<string.h>
using namespace std;
class String{
    char str[50];
    public:
    void getstring(){
        cout<<"Enter the string:"<<endl;
        cin>>str;
    }

    String operator+(String s){
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
    return temp;
    }

    void disp(){
        cout<<str<<endl;
    }
};
int main(){
    String s1,s2,res;
    cout<<"Enter the first string:"<<endl;
    s1.getstring();
    cout<<"Enter the second string:"<<endl;
    s2.getstring();
    res = s1+s2;
    cout<<"String after concatination"<<endl;
    res.disp();
    return 0;
}