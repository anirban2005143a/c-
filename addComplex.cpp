#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:

    void setdata(int a1 , int b1){
        a=a1;
        b=b1;
    }
    void addcomplex(complex c1 , complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;

        cout<<a<<" "<<b<<endl;
    }


};


int main(){

    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(2,3);

    c3.addcomplex(c1,c2);

    return 0;
}