#include<iostream>
using namespace std;

class Student{
    private:
        int marks;
        char grade;
    public:
        Student(int m, char g){
            marks=m;
            grade=g;
        }
        void show(){
            cout<<"Marks are: "<<marks<<endl;
            cout<<"Grade is: "<<grade<<endl;
        }
};

int main(){
    Student Absar(982,'A'), Hassan(852,'B');
    Absar.show();
    Hassan.show();

    return 0;
}