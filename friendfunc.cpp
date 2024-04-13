#include<iostream>
using namespace std;
class B;

class A{
    private:
        int a;
    public:
        A(){
            a=10;
        }
        friend void show(A,B);
};

class B{
    private:
        int b;
    public:
        B(){
            b=20;
        }
        friend void show(A,B);
};

friend void show(A x, B y){
    int r = x.a + y.b;
    cout<<"Class A Object has Value: "<<x.a<<endl;
    cout<<"Class B Object had value: "<<y.b<<endl;
    cout<<"Sum of Object Values: "<<r<<endl;
}

int main(){
    A obj1;
    B obj2;
    show(obj1,obj2);

    return 0;
}