#include <iostream>
using namespace std;

class Teacher{
    protected:
        int age;
        string name, address;
    public:
        void input(){
            cin>>name>>age>>address;
        }
        void print(){
            cout<<name<<endl<<age<<endl<<address<<endl;
        }
};
class Writer{
    protected:
        int books;
        string name, address;
    public:
        void input(){
            cin>>name>>books>>address;
        }
        void print(){
            cout<<name<<endl<<books<<endl<<address;
        }
};
class Scholar: public Teacher, public Writer{

};

int main(){
    
    return 0;
}
