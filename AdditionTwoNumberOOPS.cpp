// #include <iostream>

// using namespace std;

// class Add {
// public:
//     void getInput() {
//         cout << "Enter first integer: ";
//         cin >> a;

//         cout << "Enter second integer: ";
//         cin >> b;
//     }

//     int calculateSum() {
//         return a + b;
//     }

//     void displaySum() {
//         cout << "The sum is: " << calculateSum() << endl;
//     }

// private:
//     int a, b;
// };

// int main() {
//     Add obj;  // Create an object of class Add

//     obj.getInput();  // Call the getInput() function to get input
//     obj.displaySum();  // Call the displaySum() function to show the result

//     return 0;
// }



#include<iostream>
using namespace std;

class sample {
    public:
    int age;

    void display_age(){
        cout<<"your age is:"<<age<<endl;
    }
};
int main(){
    sample obj1;
    cout<<"enter your age:";
    cin>>obj1.age;
    obj1.display_age();
    return 0;
}