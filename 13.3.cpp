#include<iostream>
using namespace std;

class Circle{
    private:
        float radius;
    public:
        void set_rad(float r){
            radius = r;
        }
        void area(){
            cout<<"Area is: "<<3.14*radius*radius<<endl;
        }
        void cir(){
            cout<<"Circumference is: "<<2*3.14*radius<<endl;
        }
};

int main(){
    Circle obj;
    float r;
    cout<<"Enter Radius: ";
    cin>>r;
    obj.set_rad(r);
    obj.area();
    obj.cir();

    return 0;
}