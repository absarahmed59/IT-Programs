#include<iostream>
using namespace std;

class Array{
    private:
        int arr[5];
    public:
        void fill();
        void display();
        int max();
        int min();
};

void Array::fill(){
    for(int i=0;i<5;i++){
        cout<<"Enter arr["<<i<<"]";
        cin>>arr[i];
    }
}

void Array::display(){
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
}

int Array::max(){
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int Array::min(){
    int min = arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    Array arr;
    cout<<"Enter Values: "<<endl;
    arr.fill();
    cout<<"Entered Values: "<<endl;
    arr.display();
    cout<<"Maximum Valus is: "<<arr.max<<endl;
    cout<<"Minimum Valus is: "<<arr.min<<endl;

    return 0;
}