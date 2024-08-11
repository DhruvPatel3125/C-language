// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initialcounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayprice(void);
// };

// void shop::setPrice(void)
// {
//     cout << "Enter the id of your item no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void shop::displayprice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << " The price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     shop a1;
//     a1.initialcounter();
//     a1.setPrice();
//     a1.displayprice();
//     return 0;
// }

#include<iostream>
using namespace std;
class book{
    int book_id[100];
    int book_price[100];
    int counter;

    public:
    void initialcounter(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
};

void book::setprice(void){
    cout<<"Enter the id of book"<<counter +1<<endl;
    cin>>book_id[counter];
    cout<<"Enter price of the book"<<endl;
    cin>>book_price[counter];
    counter++;
}

void book::displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of book with ID "<<book_id[i]<<" is "<<book_price[i]<<endl;
    }
}
int main(){
    book b1;
    b1.initialcounter();
    b1.setprice();
    b1.displayprice();
    return 0;
}