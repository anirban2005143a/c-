#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // complex(){
    //     a=0;b=0;
    // }

    // complex(int x){
    //     a=x;b=0;
    // }

    complex(int x=0,int y=0){
        a=x;b=y;
    }

    void print(){
        cout<<"the complex number is "<<a<<" + "<<"i"<<b<<endl;
    }
};

int main(){

    complex c1(2,3);
    complex c2(1);
    complex c3;

    c1.print();
    c2.print();
    c3.print();
    return 0;
}