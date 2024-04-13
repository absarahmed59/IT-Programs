#include<iostream>
using namespace std;

class Book{
    private:
        int pages,price;
        string title;
    public:
        void get(){
            cout<<"Enter Pages, Price and Book Title"<<endl;
            cin>>pages>>price>>title;
        }
        void show(){
            cout<<"Title: "<<title<<endl;
            cout<<"Pages: "<<pages<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

int main(){
    Book b1;
    b1.get();
    Book b2(b1);
    Book b2 = b1;
    cout<<"Book 01 Details: "<<endl;
    b1.show();
    cout<<"Book 03 Details: "<<endl;
    b2.show();
    cout<<"Book 03 Details: "<<endl;
    b3.show();

    return 0;
}