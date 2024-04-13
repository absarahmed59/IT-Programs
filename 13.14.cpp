#include<iostream>
using namespace std;

class Travel{
    private:
        int km, hr;
    public:
        Travel(){
            km=hr=0;
        }
        void get(){
            cout<<"Enter Distance and Time";
            cin>>km>>hr;
        }
        void show(){
            cout<<"Distance: "<<km<<endl;
            cout<<"Time: "<<hr<<endl;
        }
        Travel add(Travel p){
            Travel temp;
            temp.km = km + p.km;
            temp.hr = hr + p.hr;
            return remp;
        }
};

int main(){
    Travel my,yours,total;
    my.get();
    my.show();
    your.get();
    your.show();

    total = my.add(your);
    cout<<"Total Traveled is:"<<endl;
    total.show();

    return 0;
}