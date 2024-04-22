#include<iostream>
using namespace std;

class Player{
    private:
        int avg;
        string team, name;
    public:
        Player(){
            cin>>avg>>name>>team;
        }
        void input(){
            cin>>avg>>name>>team;
        }
        void display(){
            cout<<avg<<endl<<name<<endl<<team<<endl;
        }
        void update(int a, string n, string t){
            team = t;
            avg = a;
            name = n;
        }
};

int main(){

    
    return 0;
}
