// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:

//     complex(void);//default constroctor

//     void printnum(){
//         cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// complex::complex(void){
//     a=22;
//     b=45;
// }
// int main(){
//     complex o1,o2,o3;
//     o1.printnum();
//     o2.printnum();
//     o3.printnum();

//     return 0;
// }

// parametrized constructor

// #include<iostream>
// using namespace std;
// class complex{
//     int a ,b;
//     public:
//     complex(int,int);// constructor declaration

//     void printnum(){
//         cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };

// complex :: complex(int x,int y){
//     a = x;
//     b = y;
// }
// int main(){
//     complex a(2,3);
//     complex b(5,6);
//     complex c(3,4);

//     a.printnum();
//     b.printnum();
//     c.printnum();
//     return 0;
// }

// example-2

// #include<iostream>
// using namespace std;
// class point{
//     int x,y;
//     public:
//     point(int a,int b){
//         x = a;
//         y = b;
//     }

//     void disp(){
//         cout<<"The point is("<<x<<","<<y<<")"<<endl;
//     }
// };
// int main(){
//     point p(1,1);
//     p.disp();
//     point c(2,3);
//     c.disp();
//     return 0;
// }

// // create a function (hint:make it a friend function) which takes 2 point objects and computes the distance between
// //  those 2 points in oops concepts in c++
// #include <iostream>
// #include <cmath> // For sqrt()

// class Point {
// private:
//     double x;
//     double y;

// public:
//     Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

//     // Friend function to calculate distance between two points
//     friend double calculateDistance(const Point& p1, const Point& p2);
// };

// // Calculate distance using the distance formula
// double calculateDistance(const Point& p1, const Point& p2) {
//     double dx = p2.x - p1.x;
//     double dy = p2.y - p1.y;
//     return sqrt(dx * dx + dy * dy);
// }

// int main() {
//     Point point1(1.0, 2.0);
//     Point point2(4.0, 6.0);

//     double distance = calculateDistance(point1, point2);
//     std::cout << "Distance between the two points: " << distance << std::endl;

//     return 0;
// }

// constructor overloding

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:

//     complex(){
//         a = 0;
//         b = 0;
//     }
//     complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     complex(int x)
//     {
//         a = x;
//         b = 0;
//     }

//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };
// int main()
// {
//     complex a1(5, 4);
//     a1.printnumber();

//     complex s1(3);
//     s1.printnumber();

//     complex b1;
//     b1.printnumber();

//     return 0;
// }


//default constructor


#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a,int b=9,int c=0){//here b is the default argument of 9
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};
void simple ::printdata(){
    cout<<"the value of data is "<<data1<<" and "<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s(1,4,5);
    s.printdata();
    return 0;
}

// boi