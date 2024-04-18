#include <iostream>
using namespace std;

class LocalPhone{
    protected:
        int local_no;
    public:
        void input(){
            cin>>local_no;
        }
        void print(){
            cout<<local_no<<endl;
        }
};
class NatPhone: public LocalPhone{
    protected:
        int city_code;
    public:
        void input(){
            cin>>city_code;
        }
        void print(){
            cout<<city_code<<endl;
        }
};
class IntPhone: public NatPhone{
    private:
        int country_code;
    public:
        void input(){
            cin>>country_code;
        }
        void print(){
            cout<<country_code<<endl;
        }
};

int main(){
    
    return 0;
}
