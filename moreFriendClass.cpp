#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    friend void add(X  , Y );
    public:
    void setValue(int value){
        data = value;
    }
};

class Y{
    int num;
    friend void add(X  , Y );
    public:
    void setValue(int value){
        num = value;
    }
};

void add(X a , Y b){
    cout<<"after adding data of x anf y "<<a.data+b.num<<endl;
}

int main(){
    X a;
    Y b;
    a.setValue(4);
    b.setValue(5);

    add(a,b);

    return 0;
} 
