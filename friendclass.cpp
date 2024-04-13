#include<iostream>
using namespace std;

class A{
    private:
        int a,b;
    public:
        A(){
            a=10;
            b=20;
        }
        friend class B;
};

class B{
    public:
        void showA(A obj){
            cout<<"Value of a: "<<obj.a<<endl;
        }
        void showB(A obj){
            cout<<"Value of b: "<<obj.b<<endl;
        }
};

int main(){
    A x;
    B y;
    y.showA(x);
    y.showB(x);

    return 0;
}