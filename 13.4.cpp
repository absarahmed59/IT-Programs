#include<iostream>
using namespace std;

class Book{
    private:
        int id,pages,price;
    public:
        void get(){
            cout<<"Enter ID, Pages and Price of Book: ";
            cin>>id>>pages>>price;
        }
        void show(){
            cout<<"Book ID: "<<id<<endl;
            cout<<"Pages: "<<pages<<endl;
            cout<<"Price: "<<price<<endl;
        }
        void set(int i,int pg, int pr){
            id = i;
            pages = pg;
            price = pr;
        }
        int getPrice(){
            return price;
        }
};

int main(){
    Book b1, b2;
    b1.get();
    b2.set(2,320,570);
    cout<<"Costly Book has following Details: "<<endl;
    if(b1.getPrice()>b2.getPrice()){
        b1.show();
    }
    else{
        b2.show();
    }

    return 0;
}