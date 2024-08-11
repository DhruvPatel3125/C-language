// #include<iostream>
// using namespace std;
// class stack{
//     int stk[5];
//     int top;
//     public:
//     stack(){
//         top =-1;
//     }
//     void push(int x){
//         if(top>=4){
//             cout<<"stack overflow";
//             return;
//         }
//     top = top+1;
//     stk[top]=x;
//     cout<<"inserted"<<x;
//     }

//     void pop(){
//         if(top < 0 ){
//             cout<<"stack underflow";
//             return;
//         }
//         cout<<"delete"<<stk[top--];
//     }

//     void display(){
//         if(top<0){
//             cout<<"stack empty";
//             return;
//         }

//         for(int i=top;i>=0;i--){
//             cout<<stk[i]<<" ";
//         }
//     }
//     void peep(){
//         int i;
//         cout<<"enter the position";
//         cin>>i;
//         if(top<0){

//             cout<<"stack empty";
//             return;
//         }
//         cout<<stk[top-i+1];
//     }

//     void change(){
//         int i,item;
//         if(top<0){
//             cout<<"stack empty";
//             return;
//         }
//         stk[top-i+1]=item;
//         cout<<"element insert in the given position";
//     }
// };
// int main(){
//     int ch;
//     stack st;
//     while(1){
//         cout<<"\n===================\n1.push \n2.pop \n3.display \n4.peep \n5.chang \n6.exit \n===================\n enter choice:";
//         cin>>ch;
//         switch(ch){
//             case 1:
//                 cout<<"enter the element:";
//                 cin>>ch;
//                 st.push(ch);
//                 break;
//             case 2:
//                 st.pop();
//                 break;
//             case 3:
//                 st.display();
//                 break;
//             case 4:
//                 st.peep();
//                 break;
//             case 5:
//                 st.change();
//                 break;
//             case 6:
//                 exit(0);
//         }
//     }
//     return 0;
// }




#include<iostream>
using namespace std;
class stack{
    int stk[5];
    int top;
    public:
    stack(){
        top = -1;
    }

    void push(int x){
        if(top>=4){
            cout<<"stack overflow";
            return;
        }
        top = top+1;
        stk[top]=x;
        cout<<"inserted"<<x;
    }
    
    void pop(){
        if(top<0){
            cout<<"stack under flow";
            return;
        }
        cout<<"delete"<<stk[top--];
    }

    void display(){
        if(top<0){
            cout<<"stack empty";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<stk[i]<<" ";
        }
    }

    void peep(){
        int i;
        cout<<"enter the position";
        cin>>i;
        if(top<0){
            cout<<"stack empty";
            return;
        }
        cout<<stk[top-i+1];
    }

   void change(){
    int i,item;
    if(top<0){
        cout<<"stack was empty";
        return;
    }
    stk[top-i+1]=item;
    cout<<"element insert in the given position";
   }
};
int main(){
    int ch;
    stack st;
    while (1)
    {
        cout<<"\n====================\n.1.push \n2.pop \n3.display \n4.peep \n5.change \n6.exit\n============================";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"enter the element";
                cin>>ch;
                st.push(ch);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                st.peep();
                break;
            case 5:
                st.change();
                break;
            case 6:
                exit(0);
        }
    }
    
    return 0;
}