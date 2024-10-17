// Create a Class Matrix with data members 2X2 integer array, 
// implement the + and operators as member functions of the class 
// to add and subtract two Matrix Object
#include <iostream>
using namespace std;

class Matrix
{
    int mat[2][2];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    Matrix operator+(Matrix m)
    {
        Matrix res;
        res.mat[0][0] = mat[0][0] + m.mat[0][0];
        res.mat[0][1] = mat[0][1] + m.mat[0][1];
        res.mat[1][0] = mat[1][0] + m.mat[1][0];
        res.mat[1][1] = mat[1][1] + m.mat[1][1];
        return res;
    }
    Matrix operator-(Matrix m)
    {
        Matrix res;
        res.mat[0][0] = mat[0][0] - m.mat[0][0];
        res.mat[0][1] = mat[0][1] - m.mat[0][1];
        res.mat[1][0] = mat[1][0] - m.mat[1][0];
        res.mat[1][1] = mat[1][1] - m.mat[1][1];
        return res;
    }

    void display(){
        cout<<mat[0][0]<<" "<<mat[0][1]<<"\n";
        cout<<mat[1][0]<<" "<<mat[1][1]<<"\n";
    }
};
    int main()
    {
        Matrix m1(1,2,3,4);
        Matrix m2(4,3,2,1);
        Matrix m3=m1+m2;
        cout<<"Matrix addition result";
        m3.display();

        Matrix m4 = m1-m2;
        cout<<"\nMatrix subtraction result";
        m4.display();
        return 0;
    }