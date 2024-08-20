#include <iostream>
using namespace std;
class media
{
public:
    string title;
    double price;

    media(string title, double price) : title(title), price(price) {}

    virtual void display()
    {
        cout << "Title:" << title << endl;
        cout << "price" << price << endl;
    }
};

class book : public media
{
public:
    int page;

    book(string title, double price, int page) : media(title, price), page(page) {}

    void display() override
    {
        media::display();
        cout << "pages:" << page << endl;
    }
};

class Tape : public media
{
public:
    int playtime;

    Tape(string title, double price, int playtime) : media(title, price), playtime(playtime) {}

    void display() override
    {
        media::display();
        cout << "playtime" << playtime << "minuts" << endl;
    }
};
int main()
{
    book Book("dhruv", 4555, 34);
    Tape tape("rock", 444, 60);

    media *mediaptr;

    mediaptr = &Book;
    mediaptr->display();

    mediaptr = &tape;
    mediaptr->display();
    return 0;
}