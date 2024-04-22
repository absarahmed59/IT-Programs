#include<iostream>
using namespace std;

class BankAcc{
    private:
        string name, type;
        int amount, acc_no;
    public;
        BankAcc(){
            name = "";
            type = "";
            amount = 0;
            acc_no = 0;
        }
        void deposit(int n){
            amount = n;
        }
        void withdraw(int n){
            if(n>amount){
                cout<<"Not enough Balance"<<endl;
            }
            else{
                amount -= n;
            }
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<amount<<endl;
            }
};

int main(){

    
    return 0;
}
