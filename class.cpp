#include<iostream>
using namespace std;

class Student{
    private:
        int a,b,c;
    public:
        int e,d;

    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};

void Student :: setdata(int a1, int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Student anirban;
    anirban.d=4;
    anirban.e=5;
    anirban.setdata(1,2,3);
    anirban.getdata();
    return 0;
}