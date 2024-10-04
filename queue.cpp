// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// class queue
// {
//     int q1[5];
//     int front, reare;

// public:
//     queue()
//     {
//         front = -1;
//         reare = -1;
//     }
//     void insert(int x)
//     {
//         if (reare == 5)
//         {
//             cout << "\n queue is overflow";
//             reare = 5;
//             return;
//         }
//         if (front == -1)
//         {
//             front = 0;
//             reare = 0;
//         }
//         q1[reare] = x;
//         reare++;
//     }
//     void delet()
//     {
//         cout << "\n value of front is \n"
//              << front << ":" << reare;
//         if (front == -1)
//         {
//             cout << "queue is underflow";
//             return;
//         }
//         else
//         {
//             cout << "\n deleted" << q1[front];
//         }
//         if (front == (reare - 1))
//         {
//             front = -1;
//             reare = -1;
//         }
//         else
//         {
//             front++;
//         }
//     }
//     void display()
//     {
//         int i;
//         if (front == -1)
//         {
//             cout << "queue is empty";
//             return;
//         }
//         for (i = front; i < reare; i++)
//         {
//             cout << q1[i] << " ";
//         }
//     }
// };

// int main()
// {
//     int ch;
//     queue qu;
//     while (true)
//     {
//         cout << "\n===========\n1.insert\n2.delete\n3.display\n4.exit\n==============\n";
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             cout << "Enter the element";
//             cin >> ch;
//             qu.insert(ch);
//             break;
//         case 2:
//             qu.delet();
//             break;
//         case 3:
//             qu.display();
//             break;
//         case 4:
//             exit(0);
//         }
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
class queue{
    int q1[5];
    int front,reare;

    public:
    queue(){
        front =-1;
        reare = -1;
    }
    void insert(int x){
        if (reare==5){
            cout<<"\n queue is overflow";
            reare = 5;
            return;
        }
        if(front ==-1){
            front =0;
            reare = 0;
        }
        q1[reare]=x;
        reare++;
    }
    void delet(){
        cout<<"\n vale of front is \n"<<front<<":"<<reare;
        if(front == -1){
            cout<<"\n queue is  underflow";
            return;

        }
        else{
            cout<<"\n deleted:"<<q1[front];
        }
        if(front == (reare - 1)){
            front =-1;
            reare = -1;
        }
        else{
            front++;
        }
    }
    void display(){
        int i;
        if(front ==-1){
            cout<<"queue is empty";
            return;
        }
        for(i=front;i<reare;i++){
            cout<<q1[i]<<" ";
        }
    }
};
int main(){
    {
        int ch;
        queue qu;
        while (true){
            cout<<"\n===================================\n1.insert\n2.delete\n3.display\n4.exit\n==================================\n";
            cin>>ch;
            switch(ch){
                case 1:
                cout<<"enter the value to be inserted";
                cin>>ch;
                qu.insert(ch);
                break;
                case 2:
                qu.delet();
                break;
                case 3:
                qu.display();
                break;
                case 4:
                exit(0);
            }
        }
    }
    return 0;
}