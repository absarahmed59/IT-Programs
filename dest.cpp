#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout<<"Object is Created (^-^)"<<endl;
        }
        ~Test(){
            cout<<"Object is Destroyed (*-*)"<<endl;
        }
};

int main(){
    Test a,b;

    return 0;
}