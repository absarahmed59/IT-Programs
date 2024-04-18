#include <iostream>
using namespace std;

class Employee{
    protected:
        int scale, id;
    public:
        void input(){
            cin>>id>>scale;
        }
        void print(){
            cout<<id<<endl>>scale<<endl;
        }
};

class Manager: public Employee{
    private:
        int manager_id;
        string department;
    public:
        void input(){
            cin>>manager_id>>department;
        }
        void print(){
            cout<<manager_id<<endl<<department;
        }
};

int main(){
       
    return 0;
}
