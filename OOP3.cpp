#include<iostream>
using namespace std;

class DB{
    private:
        int i, f, total_i;
    public:
        DB(int a, int b){
            i = a;
            f = b;
            total_i = i+f*12;
        }
    friend DM DM_Dis(DB a, DM b);
    friend DB DB_Dis(DB a, DM b);
};

class DM{
    private:
        int m, cm, total_cm;
    public:
        DM(int a, int b){
            m = a;
            cm = b;
            total_cm = cm+m*100; 
        }
    friend DM DM_Dis(DB a, DM b);
    friend DB DB_Dis(DB a, DM b);
};

DM DM_dis(DB a, DM b){
    DM total;
    total.total_cm = b.total_cm + a.total_i*2.54;
    total.m = total.total_cm/100;
    total.cm = total.total.cm%100;
    return total;
}

DB DB_dis(DB a, DM b){
    DB total;
    total.total_i = a.total_i + b.total_cm*0.394;
    total.f = total.total_i/12;
    total.i = total.total.i%12;
    return total;
}
int main(){

    
    return 0;
}
