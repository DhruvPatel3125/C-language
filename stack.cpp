#include<iostream>
using namespace std;
class stack{
 
    int top;
    int stk[5];
       public:
    stack(){
        top =-1;
    }
    void push(int x){
        if(top>=4){
            cout<<"Stack overflow";
            return;
        }
        top=top+1;
        stk[top]=x;
        cout<<"inserted"<<x;
    }
    void pop(){
        if(top<0){
            cout<<"stack under flow";
            return;
        }
        cout<<"deleted"<<stk[top--];
    }
    void display(){
        if(top<0){
            cout<<"stack unserflow";
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
            cout<<"stack underflow";
            return;
        }
        cout<<stk[top-i+1];
    }

    void change(){
        int i,item;
        cout<<"Enter the position to be enter:";
        cin>>i;
        cout<<"enter the item";
        cin>>item;

        if(top<0){
            cout<<"Stack underflow";
            return;
        }
        stk[top-i+1]=item;
    }
};

int main(){
    int ch;
    stack st;
    while(1){
        cout<<"\n1.push\n2.pop\n3.display\n4.peep\n5.change\n6.exit\nEnetr the choice";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter the element to insert";
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