#include<iostream>
using namespace std;

class Yahoo{
    private:
        static int n;
    public:
        Yahoo(){
            n++;
        }
        void show(){
            cout<<n<<" Objects are created"<<endl;
        }
};

int Yahoo::n=0;
int main(){
    Yahoo x,y;
    x.show();
    Yahoo z;
    x.show();

    return 0;
}