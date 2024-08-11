// C++ Program to find Area of Rectangle and circle using constructor.

#include<iostream>
using namespace std;
class shap{
    public:
    shap(){}
    double rectangleArea(double length,double width){
        return length*width;
    }

    double circleArea(double radius){
        return 3.14*radius*radius;
    }
};

    int main(){
        shap shap;
        double ractlength,ractwidth;
        cout<<"enter the length of the ractangle:";
        cin>>ractlength;

        cout<<"enter the width of the ractangle:";
        cin>>ractwidth;

        cout<<"Area of rectangle is:"<<shap.rectangleArea(ractlength,ractwidth)<<endl;

        double circleradius;
        cout<<"enter the radius";
        cin>>circleradius;
        cout<<"area of circle is:"<<shap.circleArea(circleradius)<<endl;
        return 0;
    }