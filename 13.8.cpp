#include<iostream>
using namespace std;

class Number{
    private:
        int x,y;
    public:
        Number(){
            x=y=100;
        }
        void avg(){
            cout<<"X: "<<x<<endl;
            cout<<"Y: "<<y<<endl;
            cout<<"Average: "<<(x+y)/2<<endl;
        }
};

int main(){
    Number num;
    num.avg();

    return 0;
}