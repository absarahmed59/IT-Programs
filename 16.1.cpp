#include<iostream>
using namespace std;

class Test{
    private:
        int n;
    public:
        void in(){
            cout<"Enter Number: ";
            cin>>n;
        }
        void out(){
            cout<<"Number is: "<<n<<endl;
        }
};

int main(){
    Test *ptr;
    ptr = new Test;
    ptr->in();
    ptr->out();

    return 0;
}