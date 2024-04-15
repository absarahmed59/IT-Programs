#include<iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout<<"Parent Class A..."<<endl;
        }
};

class B: public A{
    public:
        virtual void show(){
            cout<<"Child Class B..."<<endl;
        }
};

class C: public A{
    public:
        virtual void show(){
            cout<<"Child Class C..."<<endl;
        }
};

int main(){
    A a;
    B b;
    C c;
    A *ptr;
    ptr = &a;
    ptr->show();
    ptr = &b;
    ptr->show();
    ptr = &c;
    ptr->show();

    return 0;
}