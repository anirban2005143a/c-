#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(int num=0){
        a=num;
    }

    number(number &num){
        cout<<"copy contructor is invoked!!"<<endl;
        a=num.a;
    }

    void print(){
        cout<<"the value is "<<a<<endl;
    }
};

int main(){
    number x,y,z(4),z1;
    x.print();
    y.print();
    z.print();
    z1 = z;//copy contructor donot invoked
    z1.print();

    number z2=z; //copy consructor is invoked
    z2.print();
    
    return 0;
}