// #include <iostream>
// using namespace std;

// int main()
// {
//     // basic example
//     int a = 4;
//     int *ptr = &a;

//     cout << ptr << endl;
//     cout << "the value of a is " << *(ptr) << endl;

//     //new operator
//     // new keyword
//     int *p = new int(40);
//     cout << "The value at address p is " << *(p) << endl;

//     int *arr = new int[3];
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     delete arr;

//     cout << "The value of arr[0] is" << arr[0] << endl;
//     cout << "The value of arr[1] is" << arr[1] << endl;
//     cout << "The value of arr[2] is" << arr[2] << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void getdata(){
        cout<<"The real number is "<<real<<endl;
        cout<<"The imaginary number is "<<imaginary<<endl;

    }

    void setdata(int a,int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    complex *ptr = new complex;
    // (*ptr).set_data(5,6);

     ptr->setdata(5,6);
    (*ptr).getdata();
    return 0;
}