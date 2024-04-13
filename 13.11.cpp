#include<iostream>
using namespace std;

class Over{
    private:
        int n;
    public:
        Over(){
            n=0;
        }
        Over(int x){
            n=x;
        }
        void show(){
            cout<<"Number is: "<<n<<endl;
        }
};

int main(){
    Over first,Second(30);
    cout<<"Object 01\n";
    first.show();
    cout<<"Object 02\n";
    second.show();

    return 0;
}