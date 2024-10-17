// #include <iostream>
// using namespace std;
// #define size 5

// // Program for circular queue
// class CircularQueue {
//     int queue[size];
//     int front, rear;

// public:
//     CircularQueue() {
//         rear = -1;
//         front = -1;
//     }

//     // Insert an element into the queue
//     void insert() {
//         int element;
//         cout << "Enter the element to be inserted: ";
//         cin >> element;

//         if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
//             cout << "Queue is full\n";
//             return;
//         } else if (front == -1) {
//             front = 0;
//             rear = 0;
//         } else if (rear == size - 1) {
//             rear = 0;
//         } else {
//             rear++;
//         }

//         queue[rear] = element;
//     }

//     // Delete an element from the queue
//     void del() {
//         if (front == -1) {
//             cout << "Queue is empty\n";
//             return;
//         }

//         cout << "\nElement deleted: " << queue[front];

//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             if (front == size - 1) {
//                 front = 0;
//             } else {
//                 front++;
//             }
//         }
//     }

//     // Print the queue elements
//     void print() {
//         if (front == -1) {
//             cout << "Queue is empty\n";
//             return;
//         }

//         if (front <= rear) {
//             for (int i = front; i <= rear; i++) {
//                 cout << queue[i] << " ";
//             }
//             cout << "\n";
//         } else {
//             for (int i = front; i < size; i++) {
//                 cout << queue[i] << " ";
//             }
//             for (int i = 0; i <= rear; i++) {
//                 cout << queue[i] << " ";
//             }
//             cout << "\n";
//         }
//     }
// };

// int main() {
//     CircularQueue q;
//     int choice;

//     while (true) {
//         cout << "1. Insert\n2. Delete\n3. Print\n4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 q.insert();
//                 break;
//             case 2:
//                 q.del();
//                 break;
//             case 3:
//                 q.print();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please choose a valid option.\n";
//         }
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
#define size 5

class Cirque{
    int q1[size];
    int front,rear;

public:
Cirque(){
    front=-1;
    rear=-1;
}
    void insert(){
        int ele;
        cout<<"Enter the element";
        cin>>ele;

        if((front == 0 && rear == size -1)||(front == rear+1)){
            cout<<"queue is overflow";
            return;
        }else if(front==-1){
            front = 0;
            rear=0;
        }else if(rear == size - 1){
            rear=0;
        }else{
            rear++;
        }
        q1[rear]=ele;
    }

    void del(){
        if(front==-1){
            cout<<"queue is underflow";
            return;
        }
        cout<<"element deleted:"<<q1[front];
        if(front == rear){
           front = -1;
           rear= -1;
            }else{
                if(front == size-1){
                    front = 0;
                }
                else{
                    front++;
                }
            }
        }
    void print(){
        if(front == -1){
            cout<<"queue is underflow";
            return;
        }
        if(front<=rear){
            for(int i =front;i<=rear;i++){
                cout<<q1[i]<<" ";
            }
            cout<<"\n";
        }else{
            for(int i=front;i<size;i++){
                cout<<q1[i]<<" ";
            }
            for(int i=0;i<rear;i++){
                cout<<q1[i]<<" ";
            }
            cout<<"\n";
        }
    }

    };


int main(){
    Cirque q;
    int ch;

    while (true)
    {
        cout<<"\n1.push\n2.pop\n3.show\n4.exit\nEnter the choice\n";
        cin>>ch;

        switch (ch){
            case 1:
            q.insert();
            break;
            case 2:
            q.del();
            break;
            case 3:
            q.print();
            break;
            case 4:
            exit(0);
            break;

        }
    }
    
}