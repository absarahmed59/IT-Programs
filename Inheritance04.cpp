#include <iostream>
using namespace std;

class Book{
    protected:
        int BookID, price;
        string name;
    public:
        void input(){
            cin>>name>>BookID>>price;
        }
        void print(){
            cout<<name<<endl<<BookID<<endl<<price<<endl;
        }
};
class Writer{
    private:
        Book names[5];
        string name, address;
    public:
        void input(){
            cin>>name>>address;
            for(int i = 0; i<5 ; i++){
                names[i].Book::input();
            }
        }
        void print(){
            cout<<name<<endl<<address<<endl;
            for(int i = 0; i<5 ; i++){
                names[i].Book::print();
            }
        }
};
class Scholar: public Writer, public Book{
    
};

int main(){
    
    return 0;
}
