#include<iostream>
using namespace std;

class Add{
    private:
        int a,b;
    public:
        Add(){
            a=b=0;
        }
        void in(){
            cout<<"Enter Values:";
            cin>>a>>b;
        }
        void show(){
            cout<<"a: "<<a<<"\nb: "<<b<<endl;
        }
        Add operator +(Add p){
            Add temp;
            temp.a = a + p.a;
            temp.b = b + p.b;
            return temp;
        }
};

int main(){
    Add x,y,z;
    x.in();
    y.in();
    z=x+y;
    x.show();
    y.show();
    z.show();
    
    return 0;
}